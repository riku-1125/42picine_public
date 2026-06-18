/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 14:02:26 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:36:15 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *s1, const char *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 1;
	if (n == 0)
		return (0);
	while (*p1 == *p2 && *p1 && i < n)
	{
		p1++;
		p2++;
		i++;
	}
	if (*p1 < *p2)
		return (-1);
	else if (*p1 > *p2)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%d\n", ft_strncmp("", "aaa", 0));
// 	printf("%d\n", strncmp("", "aaa", 0));
// 	printf("%d\n", ft_strncmp("aaa", "aaa", 1));
// 	printf("%d\n", strncmp("aaa", "aaa", 1));
// 	printf("%d\n", ft_strncmp("aaa", "aza", 2));
// 	printf("%d\n", strncmp("aaa", "aza", 2));
// 	printf("%d\n", ft_strncmp("aaa", "aba", 1));
// 	printf("%d\n", strncmp("aaa", "aba", 1));
// 	return (0);
// }
