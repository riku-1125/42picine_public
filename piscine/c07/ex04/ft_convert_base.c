/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/08 11:19:31 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/08 20:05:11 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

unsigned int	my_strlen(char *str)
{
	unsigned int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	base_len(char *base)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (base[i])
	{
		if (base[i] == ' ' || base[i] == '+' || base[i] == '-')
			return (0);
		j = 0;
		while (j < i)
		{
			if (base[j] == base[i])
				return (0);
			j++;
		}
		i++;
	}
	if (my_strlen(base) <= 1)
		return (0);
	return (my_strlen(base));
}

int	is_num(char s, char *base)
{
	int	j;

	j = 0;
	while (base[j])
	{
		if (s == base[j])
			return (1);
		j++;
	}
	return (0);
}

int	skip_space_and_count_minus(char **str)
{
	int	count_minus;

	count_minus = 0;
	while ((**str >= '\t' && **str <= '\r') || **str == ' ')
		(*str)++;
	while (**str == '-' || **str == '+')
	{
		if (**str == '-')
			count_minus++;
		(*str)++;
	}
	return (count_minus);
}

int	ft_atoi_base(char *str, char *base)
{
	int	i;
	int	count_minus;
	int	ans;

	ans = 0;
	if (base_len(base) <= 1)
		return (0);
	count_minus = skip_space_and_count_minus(&str);
	while (is_num(*str, base))
	{
		i = 0;
		while (base[i])
		{
			if (*str == base[i])
				break ;
			i++;
		}
		ans = ans * base_len(base) + i;
		str++;
	}
	if (count_minus % 2 == 1)
		ans *= -1;
	return (ans);
}
