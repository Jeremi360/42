/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sa.c                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:33:12 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:33:14 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

/*
** Swap the top two numbers in A
*/

void	sa(t_all *all)
{
	char	*a;
	char	*b;

	if (all->a)
	{
		a = all->a->content;
		b = all->a->next->content;
		all->a->content = b;
		all->a->next->content = a;
		ft_putstr_fd("sa\n", 1);
	}
}
