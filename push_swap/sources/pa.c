/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:31:24 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:31:26 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Top number in B goes to top of A
*/

void	pa(t_all *all)
{
	t_stack	*first;

	if (all->b)
	{
		first = all->b;
		all->b = first->next;
		first->next = all->a;
		all->a = first;
		ft_putstr_fd("pa\n", 1);
	}
}
