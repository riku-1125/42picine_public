/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 23:06:28 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/31 23:20:21 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	i = 2;
	if (nb == 1 || nb == 0)
		return (nb);
	while (i <= nb / 2)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_sqrt(1));
// 	printf("%d", ft_sqrt(0));
// 	printf("%d", ft_sqrt(8));
// 	printf("%d", ft_sqrt(9));
// 	printf("%d", ft_sqrt(16));
// }
