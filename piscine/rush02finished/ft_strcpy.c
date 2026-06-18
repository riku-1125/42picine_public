/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakaki <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/28 07:06:04 by yakaki            #+#    #+#             */
/*   Updated: 2026/03/28 22:00:21 by yakaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

char	*ft_strcpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

//int	main(void)
//{
//	char	dest[6];
//	char	*src;
//
//	src = "hello";
//	ft_strcpy(dest, src);
//	write(1, dest, 5);
//	write(1, "\n", 1);
//	return (0);
//}
