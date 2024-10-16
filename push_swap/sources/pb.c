/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   pb.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:31:34 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:31:35 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Top number in A goes to top of B
*/

void	pb(t_all *all)
{
	t_stack	*first;

	if (all->a)
	{
		first = all->a;
		all->a = first->next;
		first->next = all->b;
		all->b = first;
		ft_putstr_fd("pb\n", 1);
	}
}
