/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strutils.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakaki <yakaki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:43:03 by yakaki            #+#    #+#             */
/*   Updated: 2026/04/04 19:43:04 by yakaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_strndup(char *s, int n)
{
	char	*r;
	int		i;

	r = malloc(n + 1);
	if (!r)
		return (NULL);
	i = 0;
	while (i < n)
	{
		r[i] = s[i];
		i++;
	}
	r[i] = '\0';
	return (r);
}

char	*ft_strdup(char *s)
{
	if (!s)
		return (NULL);
	return (ft_strndup(s, ft_strlen(s)));
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] && s2[i] && s1[i] == s2[i])
		i++;
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

int	ft_isdigit(char c)
{
	return (c >= '0' && c <= '9');
}
