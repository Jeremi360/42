/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy_alt.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/30 10:46:40 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/05 18:24:30 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	id;
	unsigned int	rel_size;

	rel_size = 0;
	id = 0;
	while (id < n && rel_size < n)
	{
		if (src[id] != '\0')
		{
			dest[id] = src[id];
			rel_size++;
		}
		else
		{
			dest[id] = '\0';
		}
		id++;
	}
	return (dest);
}
