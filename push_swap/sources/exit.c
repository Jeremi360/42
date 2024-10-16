/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exit.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:30:25 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:30:27 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

void	exit_error(void)
{
	ft_putstr_fd("Error\n", 2);
	exit(true);
}

void	freeing(t_all *all, int *num, int *index, char **bin)
{
	int	i;

	free(index);
	index = NULL;
	free(num);
	num = NULL;
	ps_lstclear(&all->a);
	ps_lstclear(&all->b);
	i = 0;
	while (i < all->len)
	{
		free(bin[i]);
		i++;
	}
	free(bin);
}

void	ps_lstclear(t_stack **lst)
{
	t_stack	*aux;
	t_stack	*temp;

	aux = *lst;
	if (aux == NULL)
		return ;
	while (aux != NULL)
	{
		temp = aux->next;
		free(aux);
		aux = temp;
	}
	*lst = NULL;
}
