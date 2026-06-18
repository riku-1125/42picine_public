/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:36:44 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 15:22:01 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*p;
	size_t	slen;
	size_t	i;

	i = 0;
	slen = ft_strlen(s);
	if (slen <= start)
		return (ft_calloc(1, 1));
	if (len > slen - start)
		len = slen - start;
	p = ft_calloc(len + 1, sizeof(char));
	if (!p)
		return (NULL);
	while (i < len && s[start + i])
	{
		p[i] = s[start + i];
		i++;
	}
	return (p);
}

// #include "stdio.h"

// int main(void)
// {
//     char *sub;
//     sub = ft_substr("hello", 5, 3);
//     printf("%p\n", sub);
//     free(sub);
//     return (0);
// }
