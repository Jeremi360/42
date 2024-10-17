/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiernac <mbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 22:20:23 by mbiernac          #+#    #+#             */
/*   Updated: 2024/06/30 22:20:23 by mbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_c(char c)
{
	write(1, &c, 1);
	return (1);
}

int	ft_putstr_c(char *str)
{
	size_t	i;

	if (!str)
		return (ft_putstr_c("(null)"));
	i = 0;
	while (str[i])
	{
		write(1, str + i, 1);
		i++;
	}
	return (i);
}

void	ft_putnbr_c(int n, unsigned int *add)
{
	int	digit;

	if (n == -2147483648)
		*add = write(1, "-2147483648", 11);
	else if (n < 0)
	{
		*add += 1;
		write(1, "-", 1);
		n = -n;
		ft_putnbr_c(n, add);
	}
	else
	{
		if (n > 9)
		{
			ft_putnbr_c(n / 10, add);
			ft_putnbr_c(n % 10, add);
		}
		else
		{
			*add += 1;
			digit = n + 48;
			write(1, &digit, 1);
		}
	}
}

void	ft_putuns_c(unsigned int n, unsigned int *add)
{
	int	digit;

	if (n > 9)
	{
		ft_putuns_c(n / 10, add);
		ft_putuns_c(n % 10, add);
	}
	else
	{
		*add += 1;
		digit = n + 48;
		write(1, &digit, 1);
	}
}

void	ft_longhex_c(unsigned long n, char caps, unsigned int *add)
{
	int		digit;
	char	*hex;

	hex = "0123456789abcdef";
	if (caps == 'X')
		hex = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_longhex_c(n / 16, caps, add);
		ft_longhex_c(n % 16, caps, add);
	}
	else
	{
		*add += 1;
		digit = n;
		write(1, &hex[digit], 1);
	}
}
