/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 10:41:35 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:34:51 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = c;
	return (s);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buf1[10] = {0};
// 	char	buf2[10] = {0};

// 	memset(buf1, 'A', 5);
// 	ft_memset(buf2, 'A', 5);
// 	printf("memset:    %s\n", buf1);
// 	printf("ft_memset: %s\n", buf2);
// 	return (0);
// }
