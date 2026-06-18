/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:32:47 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/18 18:04:42 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*make_one_line(char	**stash, ssize_t line_len, ssize_t stash_len)
{
	char	*line;
	char	*new_stash;

	line = malloc(sizeof(char) * (line_len + 1));
	if(!line)
		return (free(*stash), *stash = NULL, NULL);
	gnl_strcpy(line, *stash, line_len);
	if(line_len == stash_len)
		return (free(*stash), *stash = NULL, line);
	new_stash = malloc(sizeof(char) * (stash_len - line_len + 1));
	if(!new_stash)
		return (free(*stash),*stash = NULL, free(line), NULL);
	gnl_strcpy(new_stash, &(*stash)[line_len], stash_len - line_len);
	free(*stash);
	*stash = new_stash;
	return (line);
}

static char	*extract_line(char	**stash)
{
	ssize_t	line_len;
	ssize_t	stash_len;
	ssize_t	i;

	i = 0;
	if (!*stash)
		return (NULL);
	stash_len = gnl_strlen(*stash);
	if (stash_len == 0)
	{
		free(*stash);
		*stash = NULL;
		return NULL;
	}
	while((*stash)[i] != '\n' && (*stash)[i])
		i++;
	line_len = i;
	if((*stash)[i] == '\n')
		line_len++;
	return (make_one_line(stash, line_len, stash_len));
}

static char	*ft_stashjoin(char *stash, char *buf)
{
	ssize_t stash_size;
	ssize_t buf_size;
	char	*p;
	ssize_t i;
	char 	*stash_cpy;
	
	stash_cpy = stash;
	i = 0;
	stash_size = gnl_strlen(stash);
	buf_size = gnl_strlen(buf);
	p = malloc(sizeof(char) * (stash_size + buf_size + 1));
	if(!p)
	{
		free(stash);
		return NULL;
	}
	while(i < stash_size)
		p[i++] = *stash_cpy++;
	while (i - stash_size < buf_size)
		p[i++] = *buf++;
	p[i] = '\0';
	free(stash);
	return	p;
}

static ssize_t	make_stash(int fd, char **stash)
{
	char	*buf;
	ssize_t	ret;
	ssize_t	total;

	total = 0;
	buf = malloc(sizeof(char) * (BUFFER_SIZE + 1));
	if(!buf)
		return ERROR;
	while (!has_newline(*stash))
	{
		ret = read(fd, buf, BUFFER_SIZE);
		if (ret == 0)
			return (free(buf), GNL_EOF);
		if (ret < 0)
			return (free(buf), ERROR);
		buf[ret] = '\0';
		*stash = ft_stashjoin(*stash, buf);
		if (!*stash)
			return (free(buf), ERROR);
		total += ret;
	}
	return (free(buf), total);
}

char	*get_next_line(int fd)
{
	static char	*stash;
	ssize_t		ret;

	ret = -1;
	if (fd < 0 || BUFFER_SIZE <= 0 || BUFFER_SIZE > SSIZE_MAX)
		return (NULL);
	if (!has_newline(stash))
	{
		ret = make_stash(fd, &stash);
		if (ret == ERROR)
		{
			free(stash);
			stash = NULL;
			return (NULL);
		}
	}
	return (extract_line(&stash));
}

