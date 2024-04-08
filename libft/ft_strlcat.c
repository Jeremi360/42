/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:44:36 by jbiernac         #+#    #+#             */
/*   Updated: 2024/02/29 14:50:57 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	src_l;
	size_t	dest_l;

	src_l = ft_strlen(src);
	dest_l = ft_strlen(dst);
	if (dest_l >= size)
		return (size + src_l);
	if (src_l < size - dest_l)
		ft_memcpy(dst + dest_l, src, src_l + 1);
	else
	{
		ft_memcpy(dst + dest_l, src, size - dest_l - 1);
		dst[size - 1] = '\0';
	}
	return (dest_l + src_l);
}
