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
	unsigned char	*mem1;
	unsigned char	*mem2;

	if (!dst && !src)
		return (NULL);
	mem1 = (unsigned char *)dst;
	mem2 = (unsigned char *)src;
	if (mem1 < mem2)
		while (len--)
			*mem1++ = *mem2++;
	else
	{
		mem1 += len - 1;
		mem2 += len - 1;
		while (len--)
			*mem1-- = *mem2--;
	}
	return (dst);
}
