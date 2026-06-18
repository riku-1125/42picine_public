/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 17:11:43 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:32:56 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	isspace(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
		|| c == ' ')
		return (1);
	else
		return (0);
}

static int	get_sign(char c)
{
	if (c == '+')
		return (1);
	else if (c == '-')
		return (-1);
	else
		return (0);
}

int	ft_atoi(const char *nptr)
{
	const char	*p;
	int			ans;
	int			sign;

	p = nptr;
	ans = 0;
	sign = 1;
	while (isspace(*p))
		p++;
	if (*p == '+' || *p == '-')
	{
		sign = get_sign(*p);
		p++;
	}
	while (*p >= '0' && *p <= '9')
	{
		ans = ans * 10 + (*p - '0');
		p++;
	}
	return (sign * ans);
}

// #include <stdio.h>
// #include <stdlib.h>
// int	main(void)
// {
// 	printf("%d\n", ft_atoi("2313"));
// 	printf("%d\n", atoi("2313"));
// 	printf("%d\n", ft_atoi("-2147483649"));
// 	printf("%d\n", atoi("-2147483649"));
// 	printf("%d\n", ft_atoi("2147483648"));
// 	printf("%d\n", atoi("2147483648"));
// 	return (0);
// }
