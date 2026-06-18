/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/23 23:03:00 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/24 20:15:08 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>
// #include <stdlib.h>

char	*ft_strlowcase(char *str)
{
	char	*tmp;

	if (!str)
		return (str);
	tmp = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + ('a' - 'A');
		str++;
	}
	return (tmp);
}

// int	main(void)
// {
// 	char	s[] = "Hello World";
// 	char	t[] = "hello\nworld2";
// 	char	*p;

// 	p = NULL;
// 	printf("%s\n", ft_strlowcase(s));
// 	printf("%s\n", ft_strlowcase(t));
// 	printf("%s", ft_strlowcase(p));
// 	return (0);
// }
