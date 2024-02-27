/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jeremi360@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 11:33:05 by jeremi360         #+#    #+#             */
/*   Updated: 2024/02/27 12:37:32 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	int	result;
	result = 0;
	if (ft_isalpha(c) == 0)
	{
		result = 1;
	}
	if (ft_isdigit(c) == 0)
	{
		result = 1;
	}
	return (result);
}
