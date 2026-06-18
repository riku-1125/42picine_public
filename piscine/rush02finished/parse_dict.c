/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   parse_dict.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shtakaki <shtakaki@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 12:23:37 by shtakaki          #+#    #+#             */
/*   Updated: 2026/04/05 12:23:40 by shtakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static int	is_empty_line(char *line)
{
	int	i;

	i = 0;
	while (line[i] == ' ' || line[i] == '\t' || line[i] == '\n'
		|| line[i] == '\r')
		i++;
	return (line[i] == '\0');
}

static t_dict	*new_node(char *key, char *val)
{
	t_dict	*node;

	node = malloc(sizeof(t_dict));
	if (!node)
		return (NULL);
	node->key = ft_strdup(key);
	node->value = ft_strdup(val);
	node->next = NULL;
	if (!node->key || !node->value)
	{
		free(node->key);
		free(node->value);
		free(node);
		return (NULL);
	}
	return (node);
}

static t_dict	*append_node(t_dict *head, t_dict *node)
{
	t_dict	*tmp;

	if (!head)
		return (node);
	tmp = head;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = node;
	return (head);
}

static int	process_line(char *line, t_dict **head)
{
	int		i;
	char	*key;
	char	*val;
	t_dict	*node;

	i = 0;
	while (line[i] && line[i] != ':')
		i++;
	if (!line[i])
		return (1);
	line[i] = '\0';
	key = ft_trim(line);
	val = ft_trim(line + i + 1);
	if (!key[0] || !ft_isdigit(key[0]))
		return (1);
	node = new_node(key, val);
	if (!node)
		return (1);
	*head = append_node(*head, node);
	return (0);
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
	while (1)
	{
		line = ft_read_line(fd);
		if (!line)
			break ;
		if (!is_empty_line(line) && process_line(line, &head))
		{
			free(line);
			free_dict(head);
			close(fd);
			return (NULL);
		}
		free(line);
	}
	close(fd);
	return (head);
}
