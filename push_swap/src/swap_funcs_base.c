/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_funcs_base.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:29:48 by jbiernac          #+#    #+#             */
/*   Updated: 2024/08/22 18:58:20 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

// used by sa, sb
void	swap_two_first(t_stack stack)
{
	int	first_value;
	int	second_value;

	if (stack_size(stack) < 2)
		return ;
	first_value = stack.value;
	second_value = stack.next->value;
	stack.value = second_value;
	stack.next->value = first_value;
}

// used by ra, rb
void	move_first_to_end(t_stack stack)
{
	t_stack	first;
	t_stack	last;

	if (stack_size(stack) < 2)
		return ;
	first = stack;
	first.next = NULL;
	last = stack_get_last(stack);
	*last.next = first;
}

// used by rra, rrb
void	move_last_to_front(t_stack stack)
{
	t_stack	first;
	t_stack	last;
	t_stack	almost_last;
	int		size;

	size = stack_size(stack);
	if (size < 2)
		return ;
	first = stack;
	almost_last = stack_get(stack, size - 1);
	last = stack_get_last(stack);
	*last.next = first;
	almost_last.next = NULL;
}

// used by pa, pb
void	push_from_to(t_stack stack_from, t_stack stack_to)
{
	t_stack	top_stack_from;
	t_stack	top_stack_to;

	if (stack_size(stack_from) == 0)
		return ;
	top_stack_from = stack_get(stack_from, 0);
	top_stack_to = stack_get(stack_to, 0);
	top_stack_to.value = top_stack_from.value;
	if (top_stack_from.next)
	{
		*stack_from.next = stack_get(stack_from, 1);
	}
}
