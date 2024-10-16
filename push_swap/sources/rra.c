/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rra.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:33:05 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:33:07 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Bottom number in A goes to top of A
*/

void	rra(t_all *all)
{
	t_stack	*prev_last;
	t_stack	*last;

	if (all->a)
	{
		last = all->a;
		prev_last = NULL;
		while (last->next != NULL)
		{
			prev_last = last;
			last = last->next;
		}
		prev_last->next = NULL;
		last->next = all->a;
		all->a = last;
		ft_putstr_fd("rra\n", 1);
	}
}
