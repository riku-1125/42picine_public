/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 16:34:09 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 16:34:14 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar(const char c)
{
	return (write(STDOUT_FILENO, &c, 1));
}

// #include <stdio.h>
// int main(void)
// {
//     printf("%d", ft_putchar('a'));
//     return (0);
// }
