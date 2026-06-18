/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base2.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:19:34 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/09 00:41:06 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int				base_len(char *base);
int				ft_atoi_base(char *str, char *base);

unsigned int	absolute_value(int n)
{
	if (n < 0)
		return (-n);
	else
		return (n);
}

int	num_array(int num, int base, int **arry)
{
	int	n;
	int	i;
	int	tmp;

	tmp = absolute_value(num);
	n = 1;
	i = 0;
	while (tmp >= base)
	{
		tmp = tmp / base;
		n++;
	}
	*arry = malloc(sizeof(int) * n);
	while (i < n)
	{
		(*arry)[i] = absolute_value(num % base);
		i++;
		num = num / base;
	}
	return (n);
}

char	*ft_convert_base(char *nbr, char *base_from, char *base_to)
{
	int		base_10;
	int		size;
	char	*p;
	int		*arry;
	int		i;

	i = 0;
	if (base_len(base_to) <= 1 || base_len(base_from) <= 1)
		return (NULL);
	base_10 = ft_atoi_base(nbr, base_from);
	size = num_array(base_10, base_len(base_to), &arry);
	p = malloc(sizeof(char) * size + 2);
	if (base_10 < 0)
		p[i++] = '-';
	while (size)
	{
		p[i] = base_to[arry[--size]];
		i++;
	}
	free(arry);
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*s;

// 	s = ft_convert_base("7", "0123456789", "01");
// 	printf("%s", s);
// 	free(s);
// 	return (EXIT_SUCCESS);
// }
