/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 11:18:14 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:34:49 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	size_t	i;

	i = len;
	if (dst < src)
		return (ft_memcpy(dst, src, len));
	else if (src < dst)
	{
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buf1[12] = "hello World";
// 	char	buf2[12] = "hello World";
// 	char	buf3[12] = "hello World";
// 	char	buf4[12] = "hello World";

// 	printf("%s\n", (char *)ft_memcpy(&buf1[3], buf1, 5));
// 	printf("%s\n", (char *)memcpy(&buf2[3], buf2, 5));
// 	printf("%s\n", (char *)ft_memmove(&buf3[3], buf3, 5));
// 	printf("%s\n", (char *)memmove(&buf4[3], buf4, 5));
// 	return (0);
// }
