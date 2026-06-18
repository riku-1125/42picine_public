/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   dict_utils.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakaki <yakaki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:42:50 by yakaki            #+#    #+#             */
/*   Updated: 2026/04/04 19:42:51 by yakaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*dict_get(t_dict *dict, char *key)
{
	t_dict	*cur;

	cur = dict;
	while (cur)
	{
		if (ft_strcmp(cur->key, key) == 0)
			return (cur->value);
		cur = cur->next;
	}
	return (NULL);
}

void	free_dict(t_dict *dict)
{
	t_dict	*next;

	while (dict)
	{
		next = dict->next;
		free(dict->key);
		free(dict->value);
		free(dict);
		dict = next;
	}
}

char	*str_join(char *a, char *b)
{
	int		la;
	int		lb;
	char	*res;

	la = ft_strlen(a);
	lb = ft_strlen(b);
	res = malloc(la + lb + 2);
	if (!res)
		return (NULL);
	ft_strcpy(res, a);
	res[la] = ' ';
	ft_strcpy(res + la + 1, b);
	return (res);
}
