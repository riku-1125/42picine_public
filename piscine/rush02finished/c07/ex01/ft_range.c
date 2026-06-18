/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 12:44:04 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/01 13:43:00 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		i;
	int		*p;
	long	size;

	i = 0;
	if (min >= max)
		return (NULL);
	size = (long)max - (long)min;
	p = (int *)malloc(sizeof(int) * (size));
	if (!p)
		return (NULL);
	while (min < max)
	{
		p[i] = min;
		i++;
		min++;
	}
	return (p);
}

// #include <limits.h>
// #include <stdio.h>

// int	main(void)
// {
// 	unsigned long	i;
// 	int				*s;

// 	i = 0;
// 	s = ft_range(INT_MIN, INT_MAX);
// 	while (i < ((long)INT_MAX - (long)INT_MIN))
// 	{
// 		printf("%d ", s[i]);
// 		i++;
// 	}
// 	free(s);
// 	return (0);
// }
