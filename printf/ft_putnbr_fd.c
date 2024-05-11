/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/26 13:51:11 by jbiernac         #+#    #+#             */
/*   Updated: 2024/03/27 13:50:13 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	loop(int n, char *c)
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

void	ft_putnbr_fd(int n, int fd)
{
	char	c[11];
	int		i;

	if (n == 0)
	{
		ft_putstr_fd("0", fd);
		return ;
	}
	if (n == -2147483648)
	{
		ft_putstr_fd("-2147483648", fd);
		return ;
	}
	if (n < 0)
	{
		ft_putchar_fd('-', fd);
		n = -n;
	}
	i = loop(n, c);
	while (i-- > 0)
		ft_putchar_fd(c[i], fd);
}
