/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:45:57 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/22 16:08:21 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	search_for_tags(char c, char *tag_ptr)
{
	const char	*tags;

	tags = "cspdiuxX%";
	tag_ptr = ft_strchr(tags, c);
	if (tag_ptr)
		return (c);
	return (0);
}

static int	str_arg(int arg_type, va_list args)
{
	if (arg_type == '%')
		return (ft_print_char('%'));
	if (arg_type == 'c')
		return (ft_print_char(va_arg(args, int)));
	if (arg_type == 's')
		return (ft_print_str(va_arg(args, char*)));
	if (ft_strchr("id", arg_type))
		return (ft_print_int(va_arg(args, int)));
	if (arg_type == 'u')
		return (ft_print_uint(va_arg(args, unsigned int)));
	if (arg_type == 'x')
		return (ft_print_hex(va_arg(args, unsigned long), arg_type));
	if (arg_type == 'X')
		return(ft_print_hex(va_arg(args, unsigned long), arg_type));
	if (arg_type == 'p')
		return (ft_print_hex(va_arg(args, unsigned long), arg_type));
	return (0);
}

int	ft_printf(const char *str, ...)
{
	char	*found;
	va_list	args;
	size_t	tag;
	size_t	print_length;

	found = (char *)str;
	va_start(args, str);
	tag = 0;
	print_length = 0;
	while (*found)
	{
		if (*found == '%')
		{
			found++;
			tag = search_for_tags(*found, found);
			if (tag)
				print_length += str_arg(tag, args) - 1;
		}
		else
			ft_putchar_fd(*found, 1);
		print_length++;
		found++;
	}
	va_end(args);
	return (print_length);
}

#include <stdio.h>

int	main(void)
{
	char	test_chr;
	int		test_num;
	char	*test_str = "test";
	char	*ptr;

	// %c
	test_chr = 'z';
	printf("%d\n", printf("printf %%c: %c |", test_chr));
	ft_printf("%d\n", ft_printf("ft_printf %%c: %c |", test_chr) - 3);
	// %c
	test_chr = 'Z';
	printf("%d\n", printf("printf %%c: %c |", test_chr));
	ft_printf("%d\n", ft_printf("ft_printf %%c: %c |", test_chr) - 3);
	// %%
	printf("%d\n", printf("printf %%%%: %% |"));
	ft_printf("%d\n", ft_printf("ft_printf %%%%: %% |") - 3);
	// %i
	test_num = 42;
	printf("%d\n", printf("printf %%i: %i |", test_num));
	ft_printf("%d\n", ft_printf("ft_printf %%i: %i |", test_num) - 3);
	// %d
	printf("%d\n", printf("printf %%d: %d |", test_num));
	ft_printf("%d\n", ft_printf("ft_printf %%d: %d |", test_num) - 3);
	// %u
	printf("%d\n", printf("printf %%u: %u |", test_num));
	ft_printf("%d\n", ft_printf("ft_printf %%u: %u |", test_num) - 3);
	// %s
	printf("%d\n", printf("printf %%s: %s |", test_str));
	ft_printf("%d\n", ft_printf("ft_printf %%s: %s |", test_str) - 3);
	// %p
	ptr = "test";
	printf("%d\n", printf("printf %%p: %p |", ptr));
	ft_printf("%d\n", ft_printf("ft_printf %%p: %p |", ptr) - 3);
	// %x
	printf("%d\n", printf("printf %%x: %x |", test_num));
	ft_printf("%d\n", ft_printf("ft_printf %%x: %x |", test_num) - 3);
	// %X
	printf("%d\n", printf("printf %%X: %X |", test_num));
	ft_printf("%d\n", ft_printf("ft_printf %%X: %X |", test_num)- 3);
	return (0);
}