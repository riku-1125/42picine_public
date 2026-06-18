/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 20:09:33 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/24 20:14:44 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_str_is_numeric(char *str)
{
	int	is_num;

	is_num = 1;
	if (!str)
		return (1);
	while (*str && is_num)
	{
		if (!(*str >= '0' && *str <= '9'))
			is_num = 0;
		str++;
	}
	return (is_num);
}

// int	main(void)
// {
// 	char	*u;
// 	char	s[] = "42";
// 	char	t[] = "42tokyo";

// 	u = NULL;
// 	printf("%d", ft_str_is_numeric(s));
// 	printf("%d", ft_str_is_numeric(t));
// 	printf("%d", ft_str_is_numeric(u));
// }
