/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 11:17:36 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:35:59 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t dest_size)
{
	size_t	i;

	i = 0;
	while (i + 1 < dest_size && src[i])
	{
		dst[i] = src[i];
		i++;
	}
	if (dest_size != 0)
		dst[i] = '\0';
	return (ft_strlen(src));
}

// #include  <bsd/string.h>
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char    buf[10];
//     memset(buf, 'a', 10);
//     printf("ft_strlcpy  :%zu\n", ft_strlcpy(buf, "hello", 0));
//     printf("ft_strlcpy  :%s\n", buf);
//     memset(buf, 'a', 10);
//     printf("strlcpy     :%zu\n", strlcpy(buf, "hello", 0));
//     printf("strlcpy     :%s\n", buf);
//     return (0);
// }
