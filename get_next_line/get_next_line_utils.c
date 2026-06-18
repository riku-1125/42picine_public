/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/18 16:43:48 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/18 16:49:56 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"
int	has_newline(char *stash)
{
	if (!stash)
		return (0);
	while (*stash)
	{
		if (*stash == '\n')
			return (1);
		stash++;
	}
	return (0);
}

ssize_t	gnl_strlen(char *str)
{
	ssize_t i;

	i = 0;
	if(!str)
		return 0;
	while(str[i])
		i++;
	return i;
}
void	gnl_strcpy(char *dst, char *src, ssize_t n)
{
	ssize_t i;

	i = 0;
	while(i < n)
	{
		*dst++ = *src++;
		i++;
	}
	*dst = '\0';
}
