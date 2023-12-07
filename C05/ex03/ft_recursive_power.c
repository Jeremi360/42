/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 14:39:45 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/06 14:40:16 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	int	result;

	result = nb;
	if (result > result * nb)
		return (0);
	if (power > 1)
		return (result * ft_recursive_power(result, power - 1));
	if (power == 0)
		return (1);
	if (power < 0)
		return (0);
	return (result);
}
