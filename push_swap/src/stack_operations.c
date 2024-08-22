/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   stack_operations.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 16:20:43 by jbiernac          #+#    #+#             */
/*   Updated: 2024/08/22 16:50:13 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

int	stack_size(t_stack stack)
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

t_stack	stack_get_last(t_stack stack)
{
	t_stack	*last;

	while (stack.next)
		last = &stack.next;
	return (*last);
}

t_stack	stack_get(t_stack stack, int index)
{
	int i;
	t_stack *last;

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