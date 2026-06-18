/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: rnishiba <rnishiba@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/05/07 13:34:22 by rnishiba          #+#    #+#             */
/*   Updated: 2026/05/07 13:34:24 by rnishiba         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*p;
	t_list	*tmp;
	t_list	*start;

	if (!lst)
		return (NULL);
	p = ft_lstnew(f(lst->content));
	if (!p)
		return (NULL);
	tmp = p;
	start = p;
	lst = lst->next;
	while (lst)
	{
		p = ft_lstnew(f(lst->content));
		if (!p)
			return (ft_lstclear(&start, del), NULL);
		tmp->next = p;
		lst = lst->next;
		tmp = p;
	}
	return (start);
}
