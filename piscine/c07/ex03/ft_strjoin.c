/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 20:23:17 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/05 13:46:33 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	get_total_len(int size, char **strs, char *sep)
{
	int	total;
	int	i;

	total = 0;
	i = 0;
	while (i < size)
	{
		total += ft_strlen(strs[i]);
		i++;
	}
	total += ft_strlen(sep) * (size - 1);
	return (total);
}

int	ft_strjoin_2(char *p, char **strs, char *sep, int size)
{
	int	count;
	int	i;
	int	o;

	o = 0;
	count = 1;
	while (count < size)
	{
		i = 0;
		while (sep[i])
			p[o++] = sep[i++];
		i = 0;
		while (strs[count][i])
			p[o++] = strs[count][i++];
		count++;
	}
	return (o);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*p;
	int		i;
	int		o;

	o = 0;
	i = -1;
	if (size == 0)
	{
		p = malloc(1);
		if (!p)
			return (NULL);
		*p = '\0';
		return (p);
	}
	p = (char *)malloc(get_total_len(size, strs, sep) + 1);
	if (!p)
		return (NULL);
	while (strs[0][++i])
	{
		p[o] = strs[0][i];
		o++;
	}
	o += ft_strjoin_2(p + o, strs, sep, size);
	p[o] = '\0';
	return (p);
}

// #include <stdio.h>

// int	main(void)
// {
// 	char	*strs[2] = {"hello", "world"};

// 	printf("%s\n", ft_strjoin(2, strs, "$$$"));
// 	return (0);
// }
