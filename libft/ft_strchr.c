/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 11:58:42 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 15:36:42 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	const char	*p = s;

	while (*p != (char)c && *p)
		p++;
	if (*p == (char)c)
		return ((char *)p);
	else
		return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = "hello world";

// 	printf("%s\n", ft_strchr("hello world", 'w'));
// 	printf("%s\n", strchr("hello world", 'w'));
// 	printf("%p\n", ft_strchr(s, '\0'));
// 	printf("%p\n", strchr(s, '\0'));
// 	printf("%p\n", ft_strchr("hello world", 'p'));
// 	printf("%p\n", strchr("hello world", 'p'));
// 	return (0);
// }
