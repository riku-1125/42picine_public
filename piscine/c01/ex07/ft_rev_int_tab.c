/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <mailto:rnishiba@student.42tok    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 19:38:08 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/23 19:26:29 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	*a;
	int	*b;
	int	tmp_char;

	if (!tab || size <= 1)
		return ;
	a = tab;
	b = tab + size - 1;
	while (a < b)
	{
		tmp_char = *a;
		*a = *b;
		*b = tmp_char;
		a++;
		b--;
	}
}

// #include <stdio.h>
// int	main(void)
// {
// 	int	s[] = {1, 2, 4};
// 	int	i;

// 	i = 0;
// 	ft_rev_int_tab(s, 3);
// 	while (i < 3)
// 	{
// 		printf("%d", s[i]);
// 		i++;
// 	}
// 	return (0);
// }
