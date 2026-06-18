/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 12:48:44 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:32:58 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
		((unsigned char *)s)[i++] = '\0';
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	buf1[10] = "aaaaaaaaaa";
// 	char	buf2[10] = "aaaaaaaaaa";

// 	ft_bzero(buf1, 3);
// 	bzero(buf2, 3);
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", buf1[i]);
// 	printf("\n");
// 	for (int i = 0; i < 10; i++)
// 		printf("%d ", buf2[i]);
// 	printf("\n");
// 	return (0);
// }
