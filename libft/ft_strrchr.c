/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jeremi360@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 15:13:23 by jeremi360         #+#    #+#             */
/*   Updated: 2024/02/29 15:15:56 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int ch)
{
	int i;
	char *ptr;

	i = 0;
	ptr = '\0';
	while (str[i])
	{
		if (str[i] == ch)
			ptr = (char *)&str[i];
		i++;
	}
	if (str[i] == ch)
		ptr = (char *)&str[i];
	return (ptr);
}