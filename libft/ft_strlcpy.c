/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jeremi360@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:28:52 by jeremi360         #+#    #+#             */
/*   Updated: 2024/02/27 14:44:06 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlcat(char *dst, const char *src, int size)
{
	int	x;
	int	y;
	int	dest_length;
	int	src_length;

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
