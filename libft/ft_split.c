/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:35:22 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:35:24 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(char const *s, char c)
{
	int		in_word;
	size_t	count;

	in_word = 0;
	count = 0;
	while (*s)
	{
		if (*s != c && !in_word)
		{
			in_word = 1;
			count++;
		}
		else if (*s == c && in_word)
			in_word = 0;
		s++;
	}
	return (count);
}

static size_t	word_len(char const *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i] != c && s[i])
		i++;
	return (i);
}

static char	*input_word(char const **s, char c)
{
	char	*p;
	size_t	wlen;
	size_t	i;

	i = 0;
	while (**s == c)
		(*s)++;
	wlen = word_len(*s, c);
	p = ft_calloc(wlen + 1, sizeof(char));
	if (!p)
		return (NULL);
	while (i < wlen)
		p[i++] = *((*s)++);
	p[i] = '\0';
	return (p);
}

static char	**free_all(char **p, size_t i)
{
	while (1)
	{
		if (i == 0)
			break ;
		i--;
		free(p[i]);
	}
	free(p);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t	array;
	char	**p;
	size_t	i;

	i = 0;
	array = count_words(s, c);
	p = ft_calloc(array + 1, sizeof(char *));
	if (!p)
		return (NULL);
	while (i < array)
	{
		p[i] = input_word(&s, c);
		if (!p[i])
			return (free_all(p, i));
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
// 	p = ft_split("aaab fad afdsfa fdsaf   fasd ", ' ');
// 	while (i < 6)
// 	{
// 		printf("%s\n", p[i]);
// 		i++;
// 	}
//     i = 0;
//     while(p[i])
//         free(p[i++]);
//     free(p);
//     return (0);
// }
