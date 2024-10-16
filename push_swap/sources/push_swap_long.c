/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   push_swap_long.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:31:55 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:31:57 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Sort a stack with more than 5 numbers
*/

void	long_push_swap(t_all *all)
{
	int	i;

	all->limit = find_limit(all->len);
	i = 0;
	while (all->limit >= 0)
	{
		while (i < all->len)
		{
			if (all->a->content[all->limit] == '0')
				pb(all);
			else
				ra(all);
			i++;
		}
		while (all->b)
			pa(all);
		all->limit--;
		i = 0;
	}
}
