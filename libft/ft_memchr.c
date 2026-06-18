/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 15:08:36 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:34:41 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t			i;
	unsigned char	*p;
	unsigned char	uc;

	p = (unsigned char *)s;
	uc = (unsigned char)c;
	i = 1;
	while (*p != uc && i < n)
	{
		p++;
		i++;
	}
	if (*p == uc && n != 0)
		return ((void *)p);
	else
		return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	printf("%p\n", ft_memchr("hello world", 'h', 2));
// 	printf("%p\n", memchr("hello world", 'h', 2));
// 	printf("%p\n", ft_memchr("hello world", ' ', 5));
// 	printf("%p\n", memchr("hello world", ' ', 5));
// 	printf("%p\n", ft_memchr("hello world", ' ', 0));
// 	printf("%p\n", memchr("hello world", ' ', 0));
// 	return (0);
// }
