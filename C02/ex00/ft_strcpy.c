/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 12:59:55 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/06 12:59:57 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strcpy(char *dest, char *src)
{
	int	size;

	size = 0;
	while (src[size] != '\0')
	{
		dest[size] = src[size];
		size++;
	}
	dest[size] = '\0';
	return (dest);
}
