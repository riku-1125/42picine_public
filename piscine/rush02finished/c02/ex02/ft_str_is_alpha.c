/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 17:51:18 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/24 20:14:34 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

int	ft_str_is_alpha(char *str)
{
	int	is_alpha;

	is_alpha = 1;
	if (!str)
		return (1);
	while (*str && is_alpha)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			is_alpha = 0;
		str++;
	}
	return (is_alpha);
}

// int	main(void)
// {
// 	char	s[] = "hello world";
// 	char	t[] = "42Tokyo";
// 	char	u[] = "hello";
// 	char	*p;

// 	p = NULL;
// 	printf("%d", ft_str_is_alpha(s));
// 	printf("%d", ft_str_is_alpha(t));
// 	printf("%d", ft_str_is_alpha(u));
// 	printf("%d", ft_str_is_alpha(p));
// 	return (0);
// }
