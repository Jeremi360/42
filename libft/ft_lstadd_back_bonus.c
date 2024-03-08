/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back_bonus.c                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/08 14:30:41 by jeremi360         #+#    #+#             */
/*   Updated: 2024/03/08 16:24:20 by jeremi360        ###   ########.fr       */
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
