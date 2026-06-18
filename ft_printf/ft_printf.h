/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:33:37 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 16:33:51 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H
# include <stdarg.h>
# include <unistd.h>
# include <stddef.h>
# include <stdint.h>

int				ft_printf(const char *format, ...);
int				ft_putchar(const char c);
typedef struct	s_conv
{
	char	c;
	int		(*f)(va_list);
}				t_conv;
int				ft_print_char(va_list arg);
int 			ft_print_str(va_list arg);
int				ft_print_ptr(va_list arg);
int				ft_dispatch(const char c, va_list args);
int				ft_print_percent(va_list arg);
int				ft_print_int(va_list arg);
int				ft_print_unsigned(va_list arg);
int				ft_print_hex_low(va_list arg);
int				ft_print_hex_up(va_list arg);

#endif
