/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:43:33 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:47:24 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static void	*zero_alloc(void)

{
	void	*p;

	p = malloc(1);
	if (!p)
		return (NULL);
	return (p);
}

void	*ft_calloc(size_t count, size_t size)
{
	void	*p;
	size_t	i;

	i = 0;
	if (count == 0 || size == 0)
		return (zero_alloc());
	if (SIZE_MAX / count < size)
		return (NULL);
	p = malloc(size * count);
	if (!p)
		return (NULL);
	while (i < size * count)
		((char *)p)[i++] = '\0';
	return (p);
}

// #include <stdio.h>
// #include <stdlib.h>

// int main(void)
// {
//     int *p = ft_calloc(5, sizeof(int));
//     for (int i = 0; i < 5; i++)
//         printf("%d ", p[i]);
//     printf("\n");
//     free(p);

//     void *q = ft_calloc(0, sizeof(int));
//     printf("%p\n", q);
//     free(q);

//     void *r = ft_calloc(5, 0);
//     printf("%p\n", r);
//     free(r);
// }
