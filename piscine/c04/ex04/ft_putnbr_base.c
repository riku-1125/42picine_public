/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_base.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/31 19:24:24 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/31 20:39:07 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	is_not_printable(char *str)
{
	char	*tmp;

	while (*str)
	{
		if (*str == '+' || *str == '-')
			return (1);
		tmp = str + 1;
		while (*tmp)
		{
			if (*str == *tmp)
				return (1);
			tmp++;
		}
		str++;
	}
	return (0);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (*str)
	{
		i++;
		str++;
	}
	return (i);
}

void	ft_putnbr_base(int nbr, char *base)
{
	int		base_len;
	long	c;
	int		i;

	c = nbr;
	if (!base)
		return ;
	base_len = ft_strlen(base);
	if (base_len <= 1 || is_not_printable(base))
		return ;
	if (c < 0)
	{
		write(1, "-", 1);
		c = -1 * c;
	}
	if (c >= base_len)
		ft_putnbr_base(c / base_len, base);
	i = c % base_len;
	write(1, &base[i], 1);
}
// int	main(void)
// {
// 	ft_putnbr_base(11, "0123456789a");
// 	return (0);
// }
