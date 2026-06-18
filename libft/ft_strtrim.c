/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:36:30 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 16:20:47 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_set(char c, char const *set)
{
	while (*set)
		if (c == *set++)
			return (1);
	return (0);
}

static size_t	get_end(char const *s1, char const *set)
{
	size_t	end;

	end = 0;
	while (s1[end])
		end++;
	if (end == 0)
		return (0);
	end--;
	while (1)
	{
		if (!is_set(s1[end], set))
			break ;
		if (end == 0)
			break ;
		end--;
	}
	return (end);
}

static size_t	get_start(char const *s1, char const *set)
{
	size_t	start;

	start = 0;
	while (s1[start])
	{
		if (!is_set(s1[start], set))
			break ;
		start++;
	}
	return (start);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	size_t	start;
	size_t	end;
	size_t	i;
	size_t	j;

	start = get_start(s1, set);
	end = get_end(s1, set);
	i = 0;
	j = start;
	if (s1[start] == '\0' || end < start)
		return (ft_calloc(1, 1));
	p = ft_calloc(end - start + 2, sizeof(char));
	if (!p)
		return (NULL);
	while (i < end - start + 1)
		p[i++] = s1[j++];
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>
// int main(void)
// {
//     char *sub;
//     sub = ft_strtrim("  hell  o   ", " ");
//     printf("%s", sub);
//     free(sub);
//     return (0);
// }
