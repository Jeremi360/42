/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_unit.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 16:04:30 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/22 16:07:51 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static int	loop(unsigned int n, char *c)
{
	int	i;

	i = 0;
	while (n > 0)
	{
		c[i] = n % 10 + '0';
		n /= 10;
		i++;
	}
	return (i);
}

int	ft_print_uint(unsigned int n)
{
	char	c[11];
	int		i;
	int		len;

	len = 0;
	if (n == 0)
		return (ft_print_int(0));
	i = loop(n, c);
	while (i-- > 0)
		len += ft_print_char(c[i]);
	return (len);
}
