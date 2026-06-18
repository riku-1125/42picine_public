/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:08:52 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/24 20:13:05 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_str_is_uppercase(char *str)
{
	int	is_uppercase;

	is_uppercase = 1;
	if (!str)
		return (1);
	while (*str && is_uppercase)
	{
		if (!(*str >= 'A' && *str <= 'Z'))
			is_uppercase = 0;
		str++;
	}
	return (is_uppercase);
}

// int	main(void)
// {
// 	char	s[] = "Hello";
// 	char	t[] = "HELLO";
// 	char	*p;

// 	p = NULL;
// 	printf("%d", ft_str_is_uppercase(s));
// 	printf("%d", ft_str_is_uppercase(t));
// 	printf("%d", ft_str_is_uppercase(p));
// }
