/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 18:32:32 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/25 21:22:47 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <stdio.h>

char	*ft_strcat(char *dest, char *src)
{
	char	*tmp_dest;
	char	*tmp_src;

	tmp_dest = dest;
	tmp_src = src;
	while (*tmp_dest)
		tmp_dest++;
	while (*tmp_src)
	{
		*tmp_dest = *tmp_src;
		tmp_dest++;
		tmp_src++;
	}
	*tmp_dest = 0;
	return (dest);
}

// int	main(void)
// {
// 	char	s[10] = "hello";
// 	char	t[] = "world";

// 	printf("%s", ft_strcat(s, t));
// 	return (0);
// }
