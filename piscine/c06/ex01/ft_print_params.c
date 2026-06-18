/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_params.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 02:50:54 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/01 04:39:10 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	char	*p;

	while (argc > 1)
	{
		argv++;
		p = *argv;
		while (*p)
		{
			write(1, p, 1);
			p++;
		}
		write(1, "\n", 1);
		argc--;
	}
	return (0);
}
