/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printF.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiernac <mbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 22:06:09 by mbiernac          #+#    #+#             */
/*   Updated: 2024/06/30 22:06:09 by mbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putptr(unsigned long tmp, unsigned int *add)
{
	if (!tmp)
		*add = ft_putstr_c("(nil)");
	else
	{
		*add = ft_putstr_c("0x");
		ft_longhex_c(tmp, 'x', add);
	}
}

size_t	process_arg(va_list va, char sigil)
{
	unsigned int	add;

	add = 0;
	if (sigil == 'c')
		add = ft_putchar_c(va_arg(va, int));
	if (sigil == 's')
		add = ft_putstr_c(va_arg(va, char *));
	if (sigil == 'd' || sigil == 'i')
		ft_putnbr_c(va_arg(va, int), &add);
	if (sigil == 'u')
		ft_putuns_c(va_arg(va, int), &add);
	if (sigil == 'x' || sigil == 'X')
		ft_longhex_c(va_arg(va, unsigned int), sigil, &add);
	if (sigil == '%')
		add = ft_putchar_c('%');
	if (sigil == 'p')
		putptr(va_arg(va, unsigned long), &add);
	return (add);
}

int	ft_printf(const char *str, ...)
{
	va_list	va;
	size_t	counter;
	char	*slider;

	if (!str)
		return (0);
	counter = 0;
	slider = (char *)str;
	va_start(va, str);
	while (*slider != 0)
	{
		if (*slider == '%')
		{
			slider++;
			counter += process_arg(va, *slider);
		}
		else
		{
			write(1, slider, 1);
			counter++;
		}
		slider++;
	}
	va_end(va);
	return (counter);
}

// #include <stdio.h> //uncomment for test only
// int main()
// {
// 	size_t lol;
// 	char* fuk = "AAAAA";
// 	char* empty = NULL;
// 	//lol = ft_printf("CHUJ%c%s%c%dCWEL", 'a', " JP2GMD ", 'c', 2136);
// 	lol = ft_printf("%d", -2147483648);
// 	//lol = ft_printf("%p", empty);
// 	//printf("chuuuj %s kutas", "cwel");
// 	//printf("\n%ld\n", lol);
// 	//lol = printf("%p", empty);
// 	//printf("chuuuj %s kutas", "cwel");
// 	printf("\n%ld\n", lol);
// 	//printf("CHUJ%c%X%s", 'a', -2, "lol");
// 	//ft_printf("CHUJ%c%p%s", 'a', fuk, "lol");

// 	return(0);
// }

/*
You have to implement the following conversions:
• %c Prints a single character.
• %s Prints a string (as defined by the common C convention).
• %% Prints a percent sign.
• %d Prints a decimal (base 10) number.
• %i Prints an integer in base 10.
• %x Prints a number in hexadecimal (base 16) lowercase format.
• %X Prints a number in hexadecimal (base 16) uppercase format.
• %p The void * pointer argument has to be printed in hexadecimal format.
• %u Prints an unsigned decimal (base 10) number.
*/
