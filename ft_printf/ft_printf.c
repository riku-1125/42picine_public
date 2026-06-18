/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:33:19 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 16:33:23 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	handle_percent(const char **format, va_list args)
{
	int	len;

	(*format)++;
	if (!**format)
		return 0;
	len = ft_dispatch(**format, args);
	if (len < 0)
		return (-1);
	return len;
}


int	ft_printf(const char *format, ...)
{
	int		total;
	int		put_len;
	va_list	args;

	total = 0;
	va_start(args, format);
	while (*format)
	{
		if (*format == '%')
			put_len = handle_percent(&format, args);
		else
			put_len = ft_putchar(*format);
		if(put_len == 0 && !*format)
			break;
		if(put_len < 0)
			return (va_end(args), -1);
		total += put_len;
		format++;
	}
	return (va_end(args), total);
}
