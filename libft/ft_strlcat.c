/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 11:17:43 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:35:55 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	dstlen;
	size_t	srclen;

	srclen = ft_strlen(src);
	if (dstsize == 0)
		return (srclen);
	dstlen = ft_strlen(dst);
	i = 0;
	while (dst[i])
		i++;
	if (i >= dstsize)
		return (srclen + dstsize);
	while (i + 1 < dstsize && *src)
	{
		dst[i] = *src++;
		i++;
	}
	if (dstsize != 0)
		dst[i] = '\0';
	return (dstlen + srclen);
}

// #include  <bsd/string.h>
// #include <stdio.h>
// #include <string.h>
// int main(void)
// {
//     char    buf[20] = "hello";
//     char    buf2[20] = "hello";
//     printf("ft_strlcat  :%zu\n", ft_strlcat(buf, "wordaaa", 6));
//     printf("ft_strlcat  :%s\n", buf);
//     printf("strlcat     :%zu\n", strlcat(buf2, "wordaaa", 6));
//     printf("strlcat     :%s\n", buf2);
//     return (0);
// }
