/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 19:01:38 by jbiernac         #+#    #+#             */
/*   Updated: 2024/03/26 13:54:46 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)dst;
	str2 = (unsigned char *)src;
	if (!dst && !src)
		return (NULL);
	if (str1 < str2)
		while (len--)
			*str1++ = *str2++;
	else
	{
		str1 += len - 1;
		str2 += len - 1;
		while (len--)
			*str1-- = *str2--;
	}
	return (dst);
}
