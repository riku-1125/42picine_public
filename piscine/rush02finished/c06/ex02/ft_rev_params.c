/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 04:49:06 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/01 05:26:21 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int		i;
	char	*p;

	i = argc;
	while (--argc > 0)
		argv++;
	while (--i > 0)
	{
		p = *argv;
		while (*p)
		{
			write(1, p, 1);
			p++;
		}
		argv--;
		write(1, "\n", 1);
	}
}
