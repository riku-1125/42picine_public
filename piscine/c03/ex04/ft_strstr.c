/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/26 01:39:43 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/26 21:36:36 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strstr(char *str, char *to_find)
{
	char	*p;
	char	*q;

	while (*str)
	{
		p = str;
		q = to_find;
		if (*str == *to_find)
		{
			while (*p == *q)
			{
				p++;
				q++;
				if (*q == 0)
					return (str);
			}
		}
		str++;
	}
	return (0);
}

// int	main(void)
// {
// 	char	s[] = "fjieaanvaaajifmofim";
// 	char	to_find[] = "oo";

// 	printf("%s", ft_strstr(s, to_find));
// 	return (0);
// }
