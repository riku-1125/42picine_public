/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: shtakaki <shtakaki@student.42.tokyo>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 13:41:17 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/05 14:35:54 by shtakaki         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_read_line(int fd)
{
	char	buf[1];
	char	tmp[1000];
	int		i;
	int		ret;
	char	*line;

	i = 0;
	ret = read(fd, buf, 1);
	while (ret > 0)
	{
		if (i >= 999)
			break ;
		tmp[i++] = buf[0];
		if (buf[0] == '\n')
			break ;
		ret = read(fd, buf, 1);
	}
	if (ret == 0 && i == 0)
		return (NULL);
	tmp[i] = '\0';
	line = malloc(i + 1);
	if (!line)
		return (NULL);
	ft_strcpy(line, tmp);
	return (line);
}
