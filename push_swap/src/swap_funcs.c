/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   swap_funcs.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:29:48 by jbiernac          #+#    #+#             */
/*   Updated: 2024/07/18 17:44:54 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

// used by sa and sb
static void	swap_two_first(t_stack stack)
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
static void	move_first_to_last(t_stack stack)
{
	t_stack	first;
	t_stack	last;

	if (stack_size(stack) < 2)
		return ;
	first = stack;
	first.next = NULL;
	last = get_last(stack);
	*last.next = first;
}

// used by rra, rrb
static void	move_last_to_first(t_stack stack)
{
	t_stack	first;
	t_stack	last;
	t_stack	almost_last;
	int		size;

	size = stack_size(stack);
	if (size < 2)
		return ;
	first = stack;
	almost_last = get(stack, size - 1);
	last = get_last(stack);
	*last.next = first;
	almost_last.next = NULL;
}

static int	stack_size(t_stack stack)
{
	int		size;
	t_stack	*last;

	last = &stack;
	size = 0;
	while (stack.next)
	{
		last = &stack.next;
		size++;
	}
	return (size);
}

static t_stack	get_last(t_stack stack)
{
	t_stack	*last;

	while (stack.next)
		last = &stack.next;
	return (*last);
}
static t_stack	get(t_stack stack, int index)
{
	int		i;
	t_stack	*last;

	i = 0;
	if (index == 0)
		return (stack);
	while (stack.next && i < index)
	{
		last = &stack.next;
		i++;
	}
	return (*last);
}
