/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:56:52 by jeremi360         #+#    #+#             */
/*   Updated: 2024/03/14 15:55:09 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_atoi(const char *str)
{
	int		i;
	int		sign;
	long	nbr;

	i = 0;
	sign = 1;
	nbr = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '-')
			sign *= -1;
		if (ft_isdigit(str[i]))
		{
			nbr = nbr * 10 + (str[i] - '0');
		}
		i++;
	}
	return (sign * nbr);
}
