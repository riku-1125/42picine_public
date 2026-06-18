/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 12:23:34 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/25 14:07:01 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	len;

	i = 0;
	len = 0;
	while (src[len] != 0)
		len++;
	if (size == 0)
		return (len);
	while (src[i] != 0 && i < size - 1)
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (len);
}

// int	main(void)
// {
// 	char	s[50];
// 	char	t[10];
// 	t = "Hello";

// 	ft_strlcpy(s, t, 5);
// 	printf("%s\n", s);
// 	printf("%d", ft_strlcpy(s, t, 3));
// 	return (0);
// }
