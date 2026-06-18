/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 15:58:00 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/04 17:59:13 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

t_dict	*process_line(char *line, t_dict *head)
{
	int		i;
	char	*key;
	char	*value;

	i = 0;
	while (line[i] && line[i] != ':')
		i++;
	line[i] = '\0';
	key = ft_trim(line);
	value = ft_trim(line + i + 1);
	// ノードを作ってheadに繋げる処理
	return (head);
}

t_dict	*parse_dict(char *filename)
{
	int		fd;
	char	*line;
	t_dict	*head;

	head = NULL;
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (NULL);
	while (42)
	{
		line = ft_read_line(fd);
		if (line == NULL)
			break ;
		head = process_line(line, head);
		free(line);
	}
	close(fd);
	return (head);
}
