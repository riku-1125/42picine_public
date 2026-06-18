/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/27 04:07:21 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/27 04:40:14 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putnbr(int nb)
{
	char	i;
	long	n;

	n = nb;
	if (n < 0)
	{
		write(1, "-", 1);
		n = -1 * n;
	}
	if (n >= 10)
		ft_putnbr(n / 10);
	i = n % 10 + '0';
	write(1, &i, 1);
}

// int	main(void)
// {
// 	ft_putnbr(-2147483648);
// 	return (0);
// }
