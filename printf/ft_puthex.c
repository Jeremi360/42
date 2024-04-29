/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/29 14:54:05 by jbiernac          #+#    #+#             */
/*   Updated: 2024/04/29 14:54:53 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_puthex(size_t nb)
{
	char	hex[16];
	int		tmp;
	int		i;

	ft_bzero(hex, 16);
	i = 0;
	while (nb)
	{
		tmp = nb % 16;
		hex[i] = (tmp + (tmp >= 10 ? ('A' - 10) : '0'));
		nb /= 16;
		i++;
	}
	ft_putstr("0x");
	while (i >= 0)
	{
		ft_putchar(hex[i]);
		i--;
	}
}