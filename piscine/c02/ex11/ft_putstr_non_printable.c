/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 01:52:40 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/25 14:08:07 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
#include <unistd.h>

void	ft_putstr_non_printable(char *str)
{
	int				i;
	int				j;
	char			*hex;
	unsigned char	c;

	hex = "0123456789abcdef";
	while (*str)
	{
		c = (unsigned char)*str;
		if (c < ' ' || c == 127)
		{
			i = c / 16;
			j = c % 16;
			write(1, "\\", 1);
			write(1, hex + i, 1);
			write(1, hex + j, 1);
		}
		else
			write(1, str, 1);
		str++;
	}
}

// int	main(void)
// {
// 	char	test[] = "Hello\nHow are you?";
// 	char	test2[] = "\a,\b,\t,\n,\v,\f,\r";

// 	ft_putstr_non_printable(test);
// 	ft_putstr_non_printable(test2);
// 	return (0);
// }
