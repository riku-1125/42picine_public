/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_read_line.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 13:41:17 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/04 17:38:48 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_read_line(int fd)
{
	char	buf[1];
	char	tmp[100];
	int		i;
	int		ret;
	char	*line;

	i = 0;
	while ((ret = read(fd, buf, 1)) > 0)
	{
		tmp[i++] = buf[0];
		if (buf[0] == '\n')
			break ;
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
