/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yakaki <yakaki@student.42tokyo.jp>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/03/30 10:53:55 by yakaki            #+#    #+#             */
/*   Updated: 2026/04/01 02:44:34 by yakaki           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (i < n && s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	if (i == n)
		return (0);
	return ((unsigned char)s1[i] - (unsigned char)s2[i]);
}

//int	main(void)
//{
//	int	result;
//
//	//完全に同じ文字列
//	result = ft_strncmp("abc", "abc", 3);
//	printf("test1: %d (期待値: 0)\n", result);
//
//	//途中で違う
//	result = ft_strncmp("abc", "axc", 3);
//	printf("test2: %d (期待値: 負の数)\n", result);
//
//	//n=0（何も比較しない）
//	result = ft_strncmp("abc", "xyz", 0);
//	printf("test3: %d (期待値: 0)\n", result);
//
//	//n=2で最初の2文字だけ比較
//	result = ft_strncmp("abcXXX", "abcYYY", 2);
//	printf("test4: %d (期待値: 0)\n", result);
//
//	//長さが違う文字列
//	result = ft_strncmp("abc", "ab", 3);
//	printf("test5: %d (期待値: 正の数)\n", result);
//
//	return (0);
//}
