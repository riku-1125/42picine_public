/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 15:33:14 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/25 21:22:52 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

int	ft_strcmp(char *s1, char *s2)
{
	while (*s1 && *s1 == *s2)
	{
		s1++;
		s2++;
	}
	return (*s1 - *s2);
}

// int	main(void)
//{
//	char	s[] = "aab";
//	char	t[] = "aabi";
//	char	u[] = "aaa";
//
//	printf("%d\n", ft_strcmp(s, t));
//	printf("%d\n", ft_strcmp(t, s));
//	printf("%d\n", ft_strcmp(s, u));
//	return (0);
//}
