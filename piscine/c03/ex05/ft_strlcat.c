/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 15:46:01 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/27 00:27:05 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
//間違ってる！！！！！！！
unsigned int	ft_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (*str)
	{
		str++;
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	rest;
	char			*dest_tmp;
	char			*src_tmp;

	src_tmp = src;
	dest_tmp = dest;
	rest = 0;
	while (*dest_tmp)
	{
		dest_tmp++;
	}
	while (rest <= size - ft_strlen(dest) - 1)
	{
		*dest_tmp = *src_tmp;
		rest++;
		dest_tmp++;
		src_tmp++;
	}
	*dest_tmp = 0;
	return (ft_strlen(dest) + ft_strlen(src));
}

int	main(void)
{
	char	s[100] = "hello";
	char	t[] = "world";

	printf("%u", ft_strlcat(s, t, 8));
	printf("%s", s);
}
