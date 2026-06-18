/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_trim.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 15:46:46 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/04 17:38:50 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

char	*ft_trim(char *str)
{
	int	start;
	int	end;

	start = 0;
	while (str[start] == ' ' || str[start] == '\n')
		start++;
	end = ft_strlen(str) - 1;
	while (end > start && (str[end] == ' ' || str[end] == '\n'))
		end--;
	str[end + 1] = '\0';
	return (str + start);
}
