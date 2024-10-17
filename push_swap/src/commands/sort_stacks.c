/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sort_stacks.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/17 16:49:43 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/17 16:49:43 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/push_swap.h"

static void	rotate_both(t_stack_node **a, t_stack_node **b,
t_stack_node *cheapest_node, bool reverse)
{
	if (reverse)
	{
		while (*b != cheapest_node->target_node && *a != cheapest_node)
			rrr(a, b, false);
	}
	else if (!reverse)
	{
		while (*b != cheapest_node->target_node && *a != cheapest_node)
			rr(a, b, false);
	}
	current_index(*a);
	current_index(*b);
}

static void	move_a_to_b(t_stack_node **a, t_stack_node **b)
{
	t_stack_node	*cheapest;
	bool			first_cond;

	cheapest = get_cheapest(*a);
	first_cond = cheapest->above_median;
	if (cheapest->above_median && cheapest->target_node->above_median)
		rotate_both(a, b, cheapest, false);
	else if (!first_cond && !(cheapest->target_node->above_median))
		rotate_both(a, b, cheapest, true);
	prep_for_push(a, cheapest, 'a');
	prep_for_push(b, cheapest->target_node, 'b');
	pb(b, a, false);
}

static void	move_b_to_a(t_stack_node **a, t_stack_node **b)
{
	prep_for_push(a, (*b)->target_node, 'a');
	pa(a, b, false);
}

static void	min_on_top(t_stack_node **a)
{
	while ((*a)->nbr != find_min(*a)->nbr)
	{
		if (find_min(*a)->above_median)
			ra(a, false);
		else
			rra(a, false);
	}
}

void	sort_stacks(t_stack_node **a, t_stack_node **b)
{
	int	len_a;

	len_a = stack_len(*a);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	if (len_a-- > 3 && !stack_sorted(*a))
		pb(b, a, false);
	while (len_a-- > 3 && !stack_sorted(*a))
	{
		init_nodes_a(*a, *b);
		move_a_to_b(a, b);
	}
	sort_3(a);
	while (*b)
	{
		init_nodes_b(*a,*b);
		move_b_to_a(a, b);
	}
	current_index(*a);
	min_on_top(a);
}
