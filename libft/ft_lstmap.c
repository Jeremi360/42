/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/19 14:44:43 by jeremi360         #+#    #+#             */
/*   Updated: 2024/03/19 14:47:43 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*nlist;
	t_list	*nobj;

	if (!lst || !f)
		return (NULL);
	nlist = ft_lstnew(f(lst->content));
	if (!nlist)
		return (NULL);
	nobj = nlist;
	lst = lst->next;
	while (lst)
	{
		nobj = ft_lstnew(f(lst->content));
		if (!nobj)
		{
			ft_lstclear(&nlist, del);
			return (NULL);
		}
		ft_lstadd_back(&nlist, nobj);
		lst = lst->next;
	}
	return (nlist);
}
