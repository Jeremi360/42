/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 14:18:17 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/05 19:53:18 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int	z;

	z = *y;
	*y = *x;
	*x = z;
}

void	ft_rev_int_tab(int *tab, int size)
{
	int	c;
	int	x;

	x = 0;
	while (x < size / 2)
	{
		c = size - x - 1;
		ft_swap(&tab[x], &tab[c]);
		x++;
	}
}
