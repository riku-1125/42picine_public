/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 08:46:01 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:33:14 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isprint(int c)
{
	if (c >= 0x20 && c <= 0x7e)
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int	main(void)
// {
// 	printf("%d", ft_isprint('1'));
// 	printf("%d", ft_isprint('\n'));
// 	printf("%d", ft_isprint('\\'));
// 	printf("%d", ft_isprint(' '));
// 	return (0);
// }
