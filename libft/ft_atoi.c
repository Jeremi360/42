/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:56:52 by jeremi360         #+#    #+#             */
/*   Updated: 2024/03/23 19:03:36 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_space(char c)
{
	if (ft_strchr(" \t\n\v\f\r", c))
		return (1);
	return (0);
}

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
		if (ft_strchr("+-", str[i]))
		{
			if (str[i] == '-')
			{
				sign = -1;
			}
			if (is_space(str[i + 1]))
				return (0);
			if (ft_strchr("+-", str[i + 1]))
				return (0);
		}
		else if (ft_isdigit(str[i]))
		{
			nbr = nbr * 10 + (str[i] - '0');
			if (is_space(str[i + 1]))
				return (sign * nbr);
		}
		else if (is_space(str[i]))
		{
			if (nbr != 0)
				return (sign * nbr);
		}
		else
			return (0);
		i++;
	}
	return (sign * nbr);
}
