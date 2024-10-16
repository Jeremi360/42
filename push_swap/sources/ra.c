/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ra.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:32:58 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:33:00 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Top number in A goes to bottom of A
*/

void	ra(t_all *all)
{
	t_stack	*first;
	t_stack	*last;

	if (all->a)
	{
		first = all->a;
		last = all->a;
		while (last->next != NULL)
			last = last->next;
		all->a = first->next;
		first->next = NULL;
		last->next = first;
		ft_putstr_fd("ra\n", 1);
	}
}
