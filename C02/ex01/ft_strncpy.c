/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:00:04 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/06 13:00:06 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strncpy(char *dest, const char *src, unsigned int n)
{
	unsigned int	id;

	id = 0;
	while (src[id] != '\0' && id < n)
	{
		dest[id] = src[id];
		id++;
	}
	while (id < n)
	{
		dest[id] = '\0';
		id++;
	}
	return (dest);
}
