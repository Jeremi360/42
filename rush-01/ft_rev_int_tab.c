/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*    ft_rev_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:18:17 by jbiernac          #+#    #+#             */
/*   Updated: 2023/11/27 14:41:30 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	x;
	int	q;
	int	c;

	x = 0;
	while (x < size / 2)
	{
		q = tab[x];
		c = size - x - 1;
		tab[x] = tab[c];
		tab[c] = q;
		x++;
	}
}
