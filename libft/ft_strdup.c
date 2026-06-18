/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:35:36 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:35:38 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	char		*p;
	const char	*tmp;
	size_t		i;

	i = 0;
	tmp = s1;
	p = ft_calloc(ft_strlen(s1) + 1, sizeof(char));
	if (!p)
		return (NULL);
	while (*tmp)
		p[i++] = *tmp++;
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>

// int main(void)
// {
//     char *sub = ft_strdup("hello");
//     printf("%s\n", sub);
//     free(sub);
//     return (0);
// }
