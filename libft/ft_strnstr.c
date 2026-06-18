/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/26 16:14:35 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:36:18 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_match(const char *p_big, const char *p_little, size_t len,
		size_t i)
{
	while (*p_big == *p_little && i < len && *p_little)
	{
		p_big++;
		p_little++;
		i++;
	}
	if (*p_little == '\0')
		return (1);
	else
		return (0);
}

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	const char	*p_big;
	const char	*p_little;
	size_t		i;

	p_big = big;
	p_little = little;
	i = 0;
	if (!*little)
		return ((char *)big);
	while (i < len && *p_big)
	{
		if (is_match(p_big, p_little, len, i))
			return ((char *)p_big);
		p_big++;
		i++;
	}
	return (NULL);
}

// #include <bsd/string.h>
// #include <stdio.h>

// int	main(void)
// {
// 	char	s[] = "fjieaanvaaajifmofim";

// 	printf("%s\n", ft_strnstr(s, "jie", 14));
// 	printf("%s\n", strnstr(s, "jie", 14));
// 	return (0);
// }
