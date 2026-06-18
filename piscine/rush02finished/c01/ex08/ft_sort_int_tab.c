/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/19 20:23:26 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/09 18:20:23 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	tmp;

	i = 0;
	if (!tab || size < 2)
		return ;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1] && j < size - 2)
			{
				tmp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = tmp;
			}
			j++;
		}
		i++;
	}
}

//#include <stdio.h>
//
// int	main(void)
//{
//	int p[] = {2,5,6,8,9};
//	int i = 0;
//
//	ft_sort_int_tab(p, 5);
//	while(i < 5)
//	{
//		printf("%d\n", p[i]);
//		i++;
//	}
//	return (0);
//}
