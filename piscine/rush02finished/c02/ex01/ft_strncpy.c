/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 16:36:23 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/25 00:30:18 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "Hello";
// 	char	t[10];
// 	int		i;

// 	i = 0;
// 	printf("関数前先頭アドレス:%p\n", t);
// 	ft_strncpy(t, s, 8);
// 	while (i < 20)
// 	{
// 		printf("dest[%d] = %d<'%c'>\n", i, t[i], t[i] ? t[i] : '?');
// 		i++;
// 	}
// 	printf("%s\n", t);
// 	printf("関数後先頭アドレス:%p\n", t);
// 	return (0);
// }
