/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_negative.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <mailto:rnishiba@student.42tok    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 12:16:36 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/19 12:35:10 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_is_negative(int n)
{
	if (n < 0)
		write(1, "N", 1);
	else
		write(1, "P", 1);
}
// int	main(void)
// {
// 	int	n;
// 	int	i;
// 	int	j;

// 	n = 1;
// 	i = -4;
// 	j = 0;
// 	ft_is_negative(n);
// 	ft_is_negative(i);
// 	ft_is_negative(j);
// 	return (0);
// }
