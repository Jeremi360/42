/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbidernac <jbidernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/28 12:35:12 by jbidernac          #+#    #+#             */
/*   Updated: 2023/11/29 17:48:25 by jbidernac         ###   ########.fr       */
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
