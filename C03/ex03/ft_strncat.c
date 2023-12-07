/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/29 19:54:29 by jbiernac          #+#    #+#             */
/*   Updated: 2023/11/30 17:35:49 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*ft_strncat(char *dest, char *src, unsigned int nb)
{
	unsigned int	x;
	unsigned int	i;

	if (nb < 1)
	{
		return (dest);
	}
	i = 0;
	x = ft_strlen(dest);
	while (src[i] != '\0' && i < nb)
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}
