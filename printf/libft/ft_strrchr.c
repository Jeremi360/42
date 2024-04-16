/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:13:23 by jbiernac         #+#    #+#             */
/*   Updated: 2024/02/29 15:15:56 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int		i;
	char	t;
	char	*temp;

	i = ft_strlen(str);
	t = (char)ch;
	temp = (char *)str;
	while (i > 0)
	{
		if (temp[i] == t)
			return (temp + i);
		i--;
	}
	if (temp[i] == t)
		return (temp + i);
	return (0);
}
