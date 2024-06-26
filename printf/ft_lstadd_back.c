/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:30:41 by jbiernac         #+#    #+#             */
/*   Updated: 2024/03/27 17:16:42 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **list, t_list *element)
{
	t_list	*last;

	if (!*list)
	{
		*list = element;
		return ;
	}
	last = *list;
	while (last->next)
		last = last->next;
	last->next = element;
}
