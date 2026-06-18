/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   memcpy.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 15:49:22 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/24 15:52:14 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	i = 0;
	if (dst == NULL && src == NULL)
		return (NULL);
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

// #include <stdio.h>
// #include <string.h>
// #include <stdlib.h>
// int main(void)
// {
//     char dest[12] = "hello world";
//     char dest2[12] = "hello world";
//     printf("%s\n", (char *)ft_memcpy(dest, &dest[6], 3));
//     printf("%s\n", (char *)memcpy(dest2, &dest2[6], 3));
//     printf("%s\n", (char *)ft_memcpy(NULL, NULL, 3));
//     printf("%s\n", (char *)memcpy(NULL, NULL, 3));
//     return (0);
// }
