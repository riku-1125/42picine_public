/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:33:58 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:34:00 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstclear(t_list **lst, void (*del)(void *))
{
	t_list	*p;
	t_list	*tmp;

	p = *lst;
	if (!p)
		return ;
	while (p)
	{
		del(p->content);
		tmp = p->next;
		free(p);
		p = tmp;
	}
	*lst = NULL;
}
