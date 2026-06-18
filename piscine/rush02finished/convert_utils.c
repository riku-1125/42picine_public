/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   convert_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shtakaki <shtakaki@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/05 13:54:01 by shtakaki          #+#    #+#             */
/*   Updated: 2026/04/05 13:56:53 by shtakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*int_to_key(int n)
{
	char	buf[12];
	int		i;
	int		j;
	char	tmp;

	if (n == 0)
		return (ft_strdup("0"));
	i = 0;
	while (n > 0)
	{
		buf[i++] = '0' + n % 10;
		n /= 10;
	}
	buf[i] = '\0';
	j = -1;
	while (++j < i / 2)
	{
		tmp = buf[j];
		buf[j] = buf[i - 1 - j];
		buf[i - 1 - j] = tmp;
	}
	return (ft_strdup(buf));
}

static char	*get_under100(int n, t_dict *dict)
{
	char	*k;
	char	*t;
	char	*o;
	char	*r;

	if (n < 20)
		k = int_to_key(n);
	else
		k = int_to_key((n / 10) * 10);
	t = dict_get(dict, k);
	free(k);
	if (!t)
		return (NULL);
	if (n < 20 || n % 10 == 0)
		return (ft_strdup(t));
	k = int_to_key(n % 10);
	o = dict_get(dict, k);
	free(k);
	if (!o)
		return (NULL);
	r = str_join(t, o);
	return (r);
}

char	*convert_3digits(int n, t_dict *dict)
{
	char	*k;
	char	*h;
	char	*r;
	char	*p;

	if (n == 0)
		return (ft_strdup(""));
	if (n < 100)
		return (get_under100(n, dict));
	k = int_to_key(n / 100);
	h = dict_get(dict, k);
	free(k);
	if (!h || !dict_get(dict, "100"))
		return (NULL);
	r = str_join(h, dict_get(dict, "100"));
	if (!r || n % 100 == 0)
		return (r);
	p = get_under100(n % 100, dict);
	if (!p)
		return (free(r), NULL);
	h = str_join(r, p);
	return (free(r), free(p), h);
}
