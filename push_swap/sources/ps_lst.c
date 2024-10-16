/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ps_lst.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:31:41 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:31:42 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Functions to manipulate push_swap linked lists
*/

t_stack	*ps_lstnew(char *bin, int index)
{
	t_stack	*new_element;

	new_element = (t_stack *)malloc(sizeof(t_stack));
	if (new_element == NULL)
		exit(EXIT_FAILURE);
	new_element->content = bin;
	new_element->index = index;
	new_element->next = NULL;
	return (new_element);
}

t_stack	*ps_lstlast(t_stack *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next != 0)
		lst = lst->next;
	return (lst);
}

void	ps_lstadd_back(t_stack **lst, t_stack *next)
{
	t_stack	*last;

	last = ps_lstlast(*lst);
	if (last != 0)
		last->next = next;
	else
		*lst = next;
}

t_stack	*ps_lstprevlast(t_stack *lst)
{
	if (lst == 0)
		return (0);
	while (lst->next->next != 0)
		lst = lst->next;
	return (lst);
}

void	ps_lstadd_front(t_stack **lst, t_stack *new)
{
	new->next = *lst;
	*lst = new;
}
