/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/01 05:27:52 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/01 06:17:45 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	sort_arg(int argc, char *argv[])
{
	char	*tmp;

	while (--argc > 1)
	{
		while (**argv)
			**argv < **(argv + 1) argv++;
	}
}

int	main(int argc, char *argv[])
{
}
