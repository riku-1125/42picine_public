/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/04 19:43:13 by yakaki            #+#    #+#             */
/*   Updated: 2026/04/05 11:52:25 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "rush02.h"

void	ft_putstr(char *s)
{
	if (s)
		write(1, s, ft_strlen(s));
}

int	validate(char *s)
{
	int	i;

	if (!s || !s[0])
		return (0);
	i = 0;
	while (s[i])
	{
		if (s[i] < '0' || s[i] > '9')
			return (0);
		i++;
	}
	if (s[0] == '0' && s[1])
		return (0);
	return (1);
}

static int	parse_args(int argc, char **argv, char **dictfile, char **numstr)
{
	if (argc < 2 || argc > 3)
		return (0);
	*dictfile = "numbers.dict";
	*numstr = argv[1];
	if (argc == 3)
	{
		*dictfile = argv[1];
		*numstr = argv[2];
	}
	return (validate(*numstr));
}

int	main(int argc, char *argv[])
{
	char	*dictfile;
	char	*numstr;
	t_dict	*dict;
	char	*result;

	if (!parse_args(argc, argv, &dictfile, &numstr))
		return (ft_putstr("Error\n"), 1);
	dict = parse_dict(dictfile);
	if (!dict)
		return (ft_putstr("Dict Error\n"), 1);
	result = convert_number(numstr, dict);
	free_dict(dict);
	if (!result)
		return (ft_putstr("Dict Error\n"), 1);
	ft_putstr(result);
	ft_putstr("\n");
	free(result);
	return (0);
}
