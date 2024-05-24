/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_ptr.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/22 17:32:37 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/24 11:26:38 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static char	to_ptr(int n)
{
	char	*ptr;

	ptr = "0123456789abcdef";
	return (ptr[n % 16]);
}

static int	loop01(unsigned long nb, char *ptr)
{
	int	tmp;
	int	i;

	i = 0;
	while (nb)
	{
		tmp = nb % 16;
		nb /= 16;
		ptr[i] = to_ptr(tmp);
		i++;
	}
	return (i);
}

int	ft_print_ptr(unsigned long ptr_nb)
{
	char ptr[20];
	int i;
	int j;

	if (ptr_nb == 0)
		return (ft_print_str("(nil)"));
	if (ptr_nb == 0)
		return (ft_print_char('0'));
	j = 0;
	if (ptr_nb < 0)
	{
		j += ft_print_char('-');
		ptr_nb = -ptr_nb;
	}
	i = loop01(ptr_nb, ptr);
	j += ft_print_str("0x");
	while (i-- > 0)
		j += ft_print_char(ptr[i]);
	return (j);
}