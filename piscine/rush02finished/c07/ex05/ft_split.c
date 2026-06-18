/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 20:06:35 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/09 00:41:38 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	is_separator(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

int	wordlen(char *s, char *charset)
{
	int	i;

	i = 0;
	while (s[i])
	{
		if (is_separator(s[i], charset))
			break ;
		i++;
	}
	return (i);
}

int	count_array(char *str, char *charset)
{
	int	into_word;
	int	i;

	i = 0;
	into_word = 0;
	while (*str)
	{
		if (!is_separator(*str, charset) && !into_word)
		{
			into_word = 1;
			i++;
		}
		if (is_separator(*str, charset) && into_word)
			into_word = 0;
		str++;
	}
	return (i);
}

void	copy_word(char **p, char **str, char *charset)
{
	int	j;

	j = 0;
	while (is_separator(**str, charset))
		(*str)++;
	*p = malloc(sizeof(char) * (wordlen(*str, charset) + 1));
	while (**str && !is_separator(**str, charset))
	{
		(*p)[j] = **str;
		j++;
		(*str)++;
	}
	(*p)[j] = '\0';
}

char	**ft_split(char *str, char *charset)
{
	char	**p;
	int		words;
	int		j;
	int		i;

	i = 0;
	j = 0;
	words = count_array(str, charset);
	p = malloc(sizeof(char *) * (words + 1));
	if (!p)
		return (NULL);
	while (i < words)
	{
		copy_word(p + i, &str, charset);
		i++;
	}
	p[i] = NULL;
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	**p;
// 	int		i;

// 	i = 0;
// 	p = ft_split("aaabbaaccaaaadddaaaeeeeaabbaaaa", "bcde");
// 	while (i != 7)
// 	{
// 		printf("%s\n", p[i]);
// 		i++;
// 	}
// 	printf("%d", ft_split("   hello   world   ", " "));
// }
