/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_handle_int.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dtanski <dtanski@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/01 13:20:26 by dtanski           #+#    #+#             */
/*   Updated: 2024/08/01 13:20:26 by dtanski          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../inc/ft_printf.h"

int	ft_handle_int(va_list ap)
{
	long long	n;
	int			neg;

	n = va_arg(ap, int);
	neg = 0;
	if (n < 0)
	{
		n *= -1;
		neg++;
		write(1, "-", 1);
	}
	return (ft_putnbr_base(n, "0123456789") + neg);
}
