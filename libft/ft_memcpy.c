/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/29 18:57:59 by jbiernac         #+#    #+#             */
/*   Updated: 2024/03/25 17:58:10 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned char	*mem1;
	unsigned char	*mem2;

	if (!dst && !src)
		return (NULL);
	mem1 = (unsigned char *)dst;
	mem2 = (unsigned char *)src;
	while (n--)
		*mem1++ = *mem2++;
	return (dst);
}
