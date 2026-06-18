/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:49:28 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/24 20:14:52 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_str_is_lowercase(char *str)
{
	int	is_lowercase;

	is_lowercase = 1;
	if (!str)
		return (1);
	while (*str && is_lowercase)
	{
		if (!(*str >= 'a' && *str <= 'z'))
			is_lowercase = 0;
		str++;
	}
	return (is_lowercase);
}

// int	main(void)
// {
// 	char	s[] = "42tokyo";
// 	char	t[] = "hello";
// 	char	*p;

// 	p = NULL;
// 	printf("%d", ft_str_is_lowercase(s));
// 	printf("%d", ft_str_is_lowercase(t));
// 	printf("%d", ft_str_is_lowercase(p));
// }
