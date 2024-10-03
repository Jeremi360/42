/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/22 17:05:39 by jbiernac          #+#    #+#             */
/*   Updated: 2024/08/22 19:24:27 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <push_swap.h>

static t_stack	a;
static t_stack	b;

static void	swap(char mode)
{
	if (mode == "a")
		swap_two_first(a);
	if (mode == "b")
		swap_two_first(b);
	if (mode == "s")
	{
		swap_two_first(a);
		swap_two_first(b);
	}
}

static void	rotate(char mode)
{
	if (mode == "a")
		move_first_to_end(a);
	if (mode == "b")
		move_first_to_end(b);
	if (mode == "r")
	{
		move_first_to_end(a);
		move_first_to_end(b);
	}
}

static void	reverse_rotate(char mode)
{
	if (mode == "a")
		move_last_to_front(a);
	if (mode == "b")
		move_last_to_front(b);
	if (mode == "r")
	{
		move_last_to_front(a);
		move_last_to_front(b);
	}
}

static void	push(char mode)
{
	if (mode == "a")
		push_from_to(b, a);
	if (mode == "b")
		push_from_to(a, b);
}

// dostaję stack a liczb
// i muszę je uporządkować rosnąco

int	main(int argc, char const *argv)
{
	// numbers2stock
	for (size_t i = 1; i < argc; i++)
	{
		t_stack stack_ele = stack_get(a, i);
		stack_ele.value = ft_atoi(argv[i]);
		if (i < argc)
			stack_ele.next = s_stack();
	}

	// sort
	size_t ops = 1;
	for (size_t i = 0; i < ops; i++)
	{
		for (size_t j = 0; j < stack_size(a); j++)
		{
			t_stack e = stack_get(a, j);
			if (!e.next)
				break ;
			if (e.value < e.next->value)
				push("b");
			else if (e.value > e.next->value)
				swap("a");
		}
		for (size_t h = 0; h < stack_size(b); h++)
		{
			t_stack e = stack_get(b, h);
			if (!e.next)
				break ;
			if (e.value < e.next->value)
				push("a");
			else if (e.value > e.next->value)
				swap("b");
		}
		if (stack_size(b) > 0)
			ops += stack_size(b);
	}
	printf("result:\n");
	for (size_t z = 0; z < stack_size(a); z++)
	{
		printf("%i", stack_get(a, z));
	}
	printf("end");

	return (0);
}