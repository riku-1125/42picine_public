/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 00:31:19 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/24 20:14:17 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	char	*tmp;

	tmp = dest;
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = 0;
	return (tmp);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "hfajhdflabuabrlufdjb";
// 	char	t[] = "42tokyo";

// 	printf("%s\n", s);
// 	printf("%s\n", t);
// 	ft_strcpy(s, t);
// 	printf("%s\n", s);
// }
