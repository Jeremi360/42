/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_hex.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:54:05 by jbiernac          #+#    #+#             */
/*   Updated: 2024/04/29 15:50:41 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

char *	ft_hex(unsigned long nb)
{
	char	hex[16];
	int		tmp;
	int		i;

	ft_bzero(hex, 16);
	i = 0;
	while (nb)
	{
		tmp = nb % 16;
		// hex[i] = (tmp + (tmp >= 10 ? ('A' - 10) : '0'));
		if (tmp > 9)
			hex[i] = tmp + ('A' - 10);
		else
		tmp += '0';
		nb /= 16;
		i++;
	}
	return ft_strjoin("0x", hex);
}