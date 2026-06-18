/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:36:08 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:36:12 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	size_t			len;
	char			*p;
	unsigned int	i;

	i = 0;
	len = ft_strlen(s);
	p = ft_calloc(len + 1, sizeof(char));
	if (!p)
		return (NULL);
	while (i < len)
	{
		p[i] = f(i, s[i]);
		i++;
	}
	p[i] = '\0';
	return (p);
}

// #include <stdio.h>

// char my_func(unsigned int i, char c)
//   {
//       if (i % 2 == 0)
//           return (ft_toupper(c));
//       return (ft_tolower(c));
//   }

// int main(void)
// {
//     char *s = ft_strmapi("hello world", my_func);
//     printf("%s\n", s);
//     free(s);
// }
