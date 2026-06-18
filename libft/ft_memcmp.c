/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:44:58 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:34:45 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	const unsigned char	*p1;
	const unsigned char	*p2;
	size_t				i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 1;
	if (n == 0)
		return (0);
	while (*p1 == *p2 && i < n)
	{
		p1++;
		p2++;
		i++;
	}
	return (*p1 - *p2);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%d\n", ft_memcmp("", "aaa", 0));
// 	printf("%d\n", memcmp("", "aaa", 0));
// 	printf("%d\n", ft_memcmp("aaa", "aaa", 1));
// 	printf("%d\n", memcmp("aaa", "aaa", 1));
// 	printf("%d\n", ft_memcmp("aaa", "aza", 2));
// 	printf("%d\n", memcmp("aaa", "aza", 2));
// 	printf("%d\n", ft_memcmp("aaa", "aba", 1));
// 	printf("%d\n", memcmp("aaa", "aba", 1));
// 	return (0);
// }
