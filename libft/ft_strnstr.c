/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:48:16 by jeremi360         #+#    #+#             */
/*   Updated: 2024/03/23 15:34:06 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *hay, const char *x, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (x[0] == '\0')
		return ((char *)hay);
	while (hay[i] && i < len)
	{
		j = 0;
		while (hay[i + j] == x[j] && i + j < len)
		{
			if (x[j + 1] == '\0')
				return ((char *)hay + i);
			j++;
		}
		i++;
	}
	return (0);
}
