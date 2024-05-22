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

#include "ft_printf.h"

static char	to_hex(int n, char format)
{
	char	*hex;

	hex = "0123456789abcdef";
	if (format == 'X')
		hex = "0123456789ABCDEF";
	return (hex[n % 16]);
}

static int	loop01(unsigned long long nb, char *hex, char format)
{
	int	tmp;
	int	i;

	i = 0;
	while (nb)
	{
		tmp = nb % 16;
		nb /= 16;
		hex[i] = to_hex(tmp, format);
		i++;
	}
	return (i);
}

int	ft_print_hex(unsigned long long nb, char format)
{
	char	hex[16];
	int		i;
	int		j;

	if (nb == 0)
		return (ft_print_char('0'));
	j = 0;
	if (nb < 0)
	{
		j += ft_print_char('-');
		nb = -nb;
	}
	i = loop01(nb, hex, format);
	if (format == 'p')
		j += ft_print_str("0x");
	while (i-- > 0)
		j += ft_print_char(hex[i]);
	return (j);
}
