/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/27 12:26:27 by jbiernac          #+#    #+#             */
/*   Updated: 2023/11/27 14:09:21 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *x, int *y)
{
	int	z;

	z = *y;
	*y = *x;
	*x = z;
}
