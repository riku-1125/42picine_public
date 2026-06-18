/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <mailto:rnishiba@student.42tok    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:38:46 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/19 17:53:00 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}
// int	main(void)
// {
// 	int	i;
// 	int	j;
// 	int	*p;
// 	int	*q;

// 	i = 42;
// 	j = 10;
// 	p = &i;
// 	q = &j;
// 	printf("i=%d, j=%d\n", i, j);
// 	ft_ultimate_div_mod(p, q);
// 	printf("div=%d,mod=%d", i, j);
// 	return (0);
// }
