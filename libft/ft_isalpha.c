/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/24 08:45:33 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:33:05 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	else
		return (0);
}

//#include <stdio.h>
// int main(void)
//{
//	printf("%d", ft_isalpha((unsigned  char)'a'));
//	printf("%d", ft_isalpha((unsigned  char)'A'));
//	printf("%d", ft_isalpha((unsigned  char)'\n'));
//	printf("%d", ft_isalpha(200));
//	return (0);
//}
