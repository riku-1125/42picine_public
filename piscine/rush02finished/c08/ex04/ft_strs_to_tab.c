/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/06 16:31:37 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/07 06:20:26 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	my_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*my_strdup(char *str)
{
	char	*p;
	int		i;

	i = 0;
	p = malloc(my_strlen(str) + 1);
	if (!p)
		return (NULL);
	while (str[i])
	{
		p[i] = str[i];
		i++;
	}
	p[i] = '\0';
	return (p);
}

void	free_copy(struct s_stock_str *p, int i)
{
	while (i--)
	{
		free(p->copy);
		p++;
	}
}

struct s_stock_str	*ft_strs_to_tab(int ac, char **av)
{
	struct s_stock_str	*p;
	int					i;

	i = 0;
	p = malloc(sizeof(struct s_stock_str) * (ac + 1));
	if (!p)
		return (NULL);
	while (ac-- > 0)
	{
		p[i].size = my_strlen(av[i]);
		p[i].str = av[i];
		p[i].copy = my_strdup(av[i]);
		if (!p[i].copy)
		{
			free_copy(p, i);
			free(p);
			return (NULL);
		}
		i++;
	}
	p[i].str = 0;
	return (p);
}
// #include <stdio.h>

// int	main(void)
// {
// 	char				*s[] = {"hello", "world", "!!!"};
// 	struct s_stock_str	*p;

// 	p = ft_strs_to_tab(3, s);
// 	printf("%s", p[2].copy);
// 	return (0);
// }
