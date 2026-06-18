/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 22:27:58 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/24 20:15:03 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

char	*ft_strupcase(char *str)
{
	char	*tmp;

	if (!str)
		return (str);
	tmp = str;
	while (*tmp)
	{
		if (*tmp >= 'a' && *tmp <= 'z')
		{
			*tmp = *tmp - ('a' - 'A');
		}
		tmp++;
	}
	return (str);
}

// int	main(void)
// {
// 	char	s[] = "Hello World";
// 	char	t[] = "hello\nworld2";
// 	char	*p;

// 	p = NULL;
// 	printf("%s\n", ft_strupcase(s));
// 	printf("%s\n", ft_strupcase(t));
// 	printf("%s", ft_strupcase(p));
// 	return (0);
// }
