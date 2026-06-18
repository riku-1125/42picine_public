/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 21:12:02 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/26 21:38:05 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	i;
	char			*tmp_dest;

	tmp_dest = dest;
	i = 0;
	while (*dest)
		dest++;
	while (i < nb && *src)
	{
		*dest = *src;
		dest++;
		src++;
		i++;
	}
	*dest = '\0';
	return (tmp_dest);
}

// int	main(void)
//{
// char	s[20] = "hello";
// char	t[] = "world";

// printf("%s\n", ft_strncat(s, t, 3));
//}
