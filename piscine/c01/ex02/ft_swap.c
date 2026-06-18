/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <mailto:rnishiba@student.42tok    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 16:59:02 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/19 17:14:23 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	tmp;

	tmp = *a;
	*a = *b;
	*b = tmp;
}

// int	main(void)
// {
// 	int	i;
// 	int	j;
// 	int	*p;
// 	int	*q;

// 	i = 2;
// 	j = 4;
// 	p = &i;
// 	q = &j;
// 	printf("%d%d\n", i, j);
// 	ft_swap(p, q);
// 	printf("%d%d", i, j);
// 	return (0);
// }
