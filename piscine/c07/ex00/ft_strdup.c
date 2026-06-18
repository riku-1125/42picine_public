/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 11:22:54 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/05 13:46:50 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

char	*ft_strdup(char *src)
{
	char	*p;
	char	*q;

	p = (char *)malloc(sizeof(char) * (ft_strlen(src) + 1));
	if (!p)
		return (NULL);
	q = p;
	while (*src)
	{
		*q = *src;
		q++;
		src++;
	}
	*q = '\0';
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*str;
// 	char	*p;

// 	str = "hello";
// 	p = ft_strdup(str);
// 	printf("%s", p);
// 	free(p);
// 	return (0);
// }
