/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_show_tab.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/07 04:47:29 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/07 06:23:20 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <unistd.h>

void	putstr(char *str)
{
	while (*str)
	{
		write(1, str, 1);
		str++;
	}
	write(1, "\n", 1);
}

void	putnbr(int nb)
{
	char	n;

	if (nb >= 10)
		putnbr(nb / 10);
	n = nb % 10 + '0';
	write(1, &n, 1);
}

void	ft_show_tab(struct s_stock_str *par)
{
	while (par->str)
	{
		putstr(par->str);
		putnbr(par->size);
		write(1, "\n", 1);
		putstr(par->copy);
		par++;
	}
}
// int	main(void)
// {
// 	char				*s[] = {"hello", "world", "!!!"};
// 	struct s_stock_str	*p;

// 	p = ft_strs_to_tab(3, s);
// 	ft_show_tab(p);
// 	return (0);
// }
