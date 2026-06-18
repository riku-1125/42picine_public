/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shtakaki <shtakaki@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 13:50:12 by shtakaki          #+#    #+#             */
/*   Updated: 2026/04/05 13:56:20 by shtakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

static char	*get_scale(int i, t_dict *dict)
{
	char	*s[13];

	s[0] = "1000";
	s[1] = "1000000";
	s[2] = "1000000000";
	s[3] = "1000000000000";
	s[4] = "1000000000000000";
	s[5] = "1000000000000000000";
	s[6] = "1000000000000000000000";
	s[7] = "1000000000000000000000000";
	s[8] = "1000000000000000000000000000";
	s[9] = "1000000000000000000000000000000";
	s[10] = "1000000000000000000000000000000000";
	s[11] = "1000000000000000000000000000000000000";
	s[12] = NULL;
	if (i <= 0 || i > 12)
		return (NULL);
	return (dict_get(dict, s[i - 1]));
}

static char	*add_block(char *res, char *word, int i, t_dict *dict)
{
	char	*scale;
	char	*tmp;

	if (i > 0)
	{
		scale = get_scale(i, dict);
		if (!scale)
			return (free(word), free(res), NULL);
		tmp = str_join(word, scale);
		free(word);
		word = tmp;
	}
	if (!res)
		return (word);
	tmp = str_join(res, word);
	return (free(res), free(word), tmp);
}

char	*convert_number(char *num, t_dict *dict)
{
	int		l;
	int		i;
	int		v;
	int		s;
	char	*res;

	if (num[0] == '0' && num[1] == '\0')
		return (ft_strdup(dict_get(dict, "0")));
	l = ft_strlen(num);
	res = NULL;
	i = (l + 2) / 3;
	while (--i >= 0)
	{
		s = l - i * 3 - 3;
		if (s < 0)
			s = 0;
		v = 0;
		while (s < (l - i * 3))
			v = v * 10 + (num[s++] - '0');
		if (v != 0)
			res = add_block(res, convert_3digits(v, dict), i, dict);
		if (v != 0 && !res)
			return (NULL);
	}
	return (res);
}
