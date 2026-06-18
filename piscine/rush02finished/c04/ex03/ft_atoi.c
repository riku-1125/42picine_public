/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 04:43:52 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/31 19:24:50 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(char *str)
{
	int	i;
	int	count_minus;

	i = 0;
	count_minus = 0;
	while ((*str >= '\t' && *str <= '\r') || *str == ' ')
		str++;
	while (*str == '-' || *str == '+')
	{
		if (*str == '-')
			count_minus++;
		str++;
	}
	while (*str >= '0' && *str <= '9')
	{
		i = *str - '0' + i * 10;
		str++;
	}
	if (count_minus % 2 == 1)
		i = i * (-1);
	return (i);
}

// #include <stdio.h>

// int	main(int argc, char *argv[])
// {
// 	if (argc != 2)
// 		return (1);
// 	printf("%d", ft_atoi(argv[1]));
// 	return (0);
// }
