/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_three.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:01:50 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/04 13:01:51 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// This function sort the stack if there are only
// three elements in the stack.
void	ft_sort_three(t_stack **stack_a)
{
	if (ft_min(*stack_a) == (*stack_a)->nbr)
	{
		ft_rra(stack_a, 0);
		ft_sa(stack_a, 0);
	}
	else if (ft_max(*stack_a) == (*stack_a)->nbr)
	{
		ft_ra(stack_a, 0);
		if (!ft_checksorted(*stack_a))
			ft_sa(stack_a, 0);
	}
	else
	{
		if (ft_find_index(*stack_a, ft_max(*stack_a)) == 1)
			ft_rra(stack_a, 0);
		else
			ft_sa(stack_a, 0);
	}
}
