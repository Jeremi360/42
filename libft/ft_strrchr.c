/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:13:23 by jeremi360         #+#    #+#             */
/*   Updated: 2024/02/29 15:15:56 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int	i;

	i = ft_strlen(str) + 1;
	while (i--)
	{
		if (str[i] == (char)ch)
			return ((char *)(str + i));
	}
	if (str[i] == (char)ch)
		return ((char *)(str + i));
	return (0);
}
