/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 13:07:13 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 16:17:14 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	i;

	i = 0;
	while (s[i])
		i++;
	while (i >= 0)
	{
		if (s[i] == (char)c)
			return ((char *)&s[i]);
		i--;
	}
	return (NULL);
}

// #include <stdio.h>
// #include <string.h>

// int	main(void)
// {
// 	char	s[] = "hello world";

// 	printf("%s\n", ft_strrchr("hello world", 'd'));
// 	printf("%s\n", strrchr("hello world", 'd'));
// 	printf("%p\n", ft_strrchr(s, '\0'));
// 	printf("%p\n", strrchr(s, '\0'));
// 	printf("%p\n", ft_strrchr("hello world", 'p'));
// 	printf("%p\n", strrchr("hello world", 'p'));
// 	return (0);
// }
