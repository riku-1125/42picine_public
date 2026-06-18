/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:33:31 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:33:34 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_scale(long n)
{
	int	i;

	i = 1;
	while (n >= 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

static void	put_ascii(char *p, int symbol, long nb, int scale)
{
	int	i;

	i = scale - (symbol != -1);
	if (symbol == -1)
		p[0] = '-';
	while (i >= (symbol == -1))
	{
		p[i--] = nb % 10 + '0';
		nb = nb / 10;
	}
}

char	*ft_itoa(int n)
{
	int		symbol;
	long	nb;
	int		scale;
	char	*p;

	nb = n;
	symbol = 1;
	if (nb < 0)
	{
		symbol = -1;
		nb = -nb;
	}
	scale = get_scale(nb);
	p = ft_calloc(scale + 1 + (symbol == -1), sizeof(char));
	if (!p)
		return (NULL);
	put_ascii(p, symbol, nb, scale);
	return (p);
}

// #include <stdio.h>
// #include <limits.h>

// int main(void)
// {
//     char *s = ft_itoa(INT_MAX);
//     printf("%s", s);
//     free(s);
//     return (0);
// }
