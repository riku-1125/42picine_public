/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 21:29:29 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/31 21:48:37 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	ans;

	ans = 1;
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	while (power > 0)
	{
		ans = ans * nb;
		power--;
	}
	return (ans);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_iterative_power(-2, 3));
// 	return (0);
// }
