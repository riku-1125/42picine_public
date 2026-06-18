/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 13:43:37 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/01 20:22:50 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int		i;
	int		c;
	long	size;

	i = 0;
	c = min;
	size = (long)max - (long)min;
	if (size > INT_MAX)
		return (-1);
	if (max <= min)
	{
		range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * size);
	if (!*range)
		return (-1);
	while (i < size)
	{
		*((*range) + i) = c;
		i++;
		c++;
	}
	return ((int)size);
}

// #include <stdio.h>

// int	main(void)
// {
// 	int	size;
// 	int	i;
// 	int	*p;

// 	i = 0;
// 	size = ft_ultimate_range(&p, 3, 5);
// 	while (i < size)
// 	{
// 		printf("%d", p[i]);
// 		i++;
// 	}
// 	printf("\n%d", size);
// 	free(p);
// 	return (0);
// }
