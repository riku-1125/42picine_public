/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 08:45:42 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:33:06 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	else
		return (0);
}

// #include <stdio.h>
// int main(void)
// {
// 	printf("%d", ft_isascii('a'));
// 	printf("%d", ft_isascii('\n'));
// 	printf("%d", ft_isascii(127));
// 	printf("%d", ft_isascii('3'));
// 	printf("%d", ft_isascii(128));

// 	return(0);
// }
