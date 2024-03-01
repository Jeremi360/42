/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:44:36 by jeremi360         #+#    #+#             */
/*   Updated: 2024/02/29 14:50:57 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	x;
	size_t	y;
	size_t	dest_length;
	size_t	src_length;

	src_length = ft_strlen(src);
	dest_length = ft_strlen(dst);
	y = dest_length;
	x = 0;
	if (dest_length < size - 1 && size > 0)
	{
		while (src[x] && dest_length + x < size - 1)
		{
			dst[y++] = src[x];
			y++;
			x++;
		}
		dst[y] = 0;
	}
	if (dest_length >= size)
	{
		dest_length = size;
	}
	return (dest_length + src_length);
}
