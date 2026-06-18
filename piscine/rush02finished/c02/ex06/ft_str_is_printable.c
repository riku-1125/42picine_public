/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 21:31:34 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/24 20:14:59 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_str_is_printable(char *str)
{
	int	is_printable;

	is_printable = 1;
	if (!str)
		return (1);
	while (*str && is_printable)
	{
		if (*str < ' ' || *str == 127)
			is_printable = 0;
		str++;
	}
	return (is_printable);
}
// int	main(void)
// {
// 	char	s[] = "hello";
// 	char	t[] = "hell0'\n'world";
// 	char	*p;

// 	p = NULL;
// 	printf("%d", ft_str_is_printable(s));
// 	printf("%d", ft_str_is_printable(t));
// 	printf("%d", ft_str_is_printable(p));
// }
