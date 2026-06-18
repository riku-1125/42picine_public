/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <mailto:rnishiba@student.42tok    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 17:16:45 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/19 17:53:10 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	*div = a / b;
	*mod = a % b;
}

// int	main(void)
// {
// 	int	i;
// 	int	j;
// 	int	div_ans;
// 	int	mod_ans;
// 	int	*p;
// 	int	*q;

// 	i = 42;
// 	j = 10;
// 	p = &div_ans;
// 	q = &mod_ans;
// 	ft_div_mod(i, j, p, q);
// 	printf("%d /%d = %d あまり %d", i, j, div_ans, mod_ans);
// }
