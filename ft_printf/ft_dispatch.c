/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_dispatch.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:38:21 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 20:56:06 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static t_conv	*get_table(void)
{
	static t_conv	table[] = {
	{'c', ft_print_char},
	{'s', ft_print_str},
	{'p', ft_print_ptr},
	{'d', ft_print_int},
	{'i', ft_print_int},
	{'u', ft_print_unsigned},
	{'x', ft_print_hex_low},
	{'X', ft_print_hex_up},
	{'%', ft_print_percent},
	{0, NULL}
	};

	return (table);
}

int	ft_dispatch(const char c, va_list args)
{
	int		i;
	t_conv	*table;
	int		ret;
	int		ret2;

	i = 0;
	table = get_table();
	while (table[i].c)
	{
		if (table[i].c == c)
			return (table[i].f(args));
		i++;
	}
	ret = ft_putchar('%');
	if (ret < 0)
		return (-1);
	ret2 = ft_putchar(c);
	if (ret2 < 0)
		return (-1);
	return (ret + ret2);
}
