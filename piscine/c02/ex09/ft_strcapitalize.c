/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/24 00:11:40 by rnishiba          #+#    #+#             */
/*   Updated: 2026/03/25 20:41:04 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <stdlib.h>

char	*ft_strcapitalize(char *str)
{
	char	*tmp;
	tmp = str;
	if (!str)
		return (str);
	if (*str >= 'a' && *str <= 'z')
		*str = *str - ('a' - 'A');
	str++;
	while(*str)
	{
		if (is_initial(*str) && *str >= 'a' && *str < 'z')
		*str = *str - ('a' - 'A');
		if 
	}


}


int is_initial(char *str)
{
	if ((!(*(str - 1) >= 'A' && *(str - 1) < 'Z' 
		|| *(str - 1) >= 'a' && *(str - 1) < 'z')) 
		&& !(*(str - 1) >= '0' && *(str - 1) < '9')) 
		&& (*str >= 'A' && *str < 'Z' || *str >= 'a' && *str < 'z')
		return 0;
	else
		return 1;
}
int	main(void)
{
	char	s[] = "hi, hOw ARE you? 42words forty-two; fifty+and+one";
	char	*p;

	p = NULL;
	printf("%s\n", ft_strcapitalize(s));
	printf("%s", ft_strcapitalize(p));
	return (0);
}
