/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/07/18 16:29:07 by jbiernac          #+#    #+#             */
/*   Updated: 2024/08/22 18:58:20 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef PUSH_SWAP_H
# define PUSH_SWAP_H

# include <libft.h>
# include <stdlib.h>

typedef struct s_stack
{
	int				value;
	struct s_stack	*next;
}					t_stack;

// swap_funcs_base.c
void				swap_two_first(t_stack stack);
void				move_first_to_end(t_stack stack);
void				move_last_to_front(t_stack stack);

// stack_operations.c
int					stack_size(t_stack stack);
t_stack				stack_get_last(t_stack stack);
t_stack				stack_get(t_stack stack, int index);
void				push_from_to(t_stack stack_from, t_stack stack_to);

#endif