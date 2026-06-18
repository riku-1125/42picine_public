/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/25 17:25:14 by rnishiba          #+#    #+#             */
/*   Updated: 2026/04/04 13:55:19 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>
int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	if (n == 0)
		return (0);
	while (*s1 && i < n && *s1 == *s2)
	{
		s1++;
		s2++;
		i++;
	}
	return (*s1 - *s2);
}

// int main()
//{
//	char s[] = "b";
//	char t[] = "a";
//	printf ("%d\n",ft_strncmp(s, t, 1));
//	printf ("%d\n",ft_strncmp(s, t, 2));
//	return (0);
//}
