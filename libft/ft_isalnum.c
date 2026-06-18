/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 08:45:23 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:33:01 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalnum(int c)
{
	if ((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A'
			&& c <= 'Z'))
		return (1);
	else
		return (0);
}

// #include <stdio.h>

// int main(void)
// {
// 	printf("%d", ft_isalnum('a'));
// 	printf("%d", ft_isalnum('A'));
// 	printf("%d", ft_isalnum('0'));
// 	printf("%d", ft_isalnum('\n'));

// 	return (0);
// }
