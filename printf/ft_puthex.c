/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:54:05 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/07 13:34:40 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char*	ft_hex(unsigned long nb, char format)
{
	char	hex[16];
	char*	result = ft_calloc(16, sizeof(char));
	char*	base = ft_calloc(16, sizeof(char));
	int		tmp = 0;
	int		i = 0;
	int j = 0;

	if (format == 'X')
		base = "0123456789ABCDEF";
	if (ft_strchr("xp", format))
		base = "0123456789abcdef";
	
	while (nb)
	{
		tmp = nb % 16;
		hex[i] = base[tmp];
		nb /= 16;
		i++;
	}
	while (i >= 0)
	{
		result[j] = hex[i];
		i--;
		j++;
	}
	if (format == 'p')
		result = ft_strjoin("0x", result);
	return result;
}