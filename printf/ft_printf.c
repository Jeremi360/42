/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:45:57 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/21 14:52:01 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdarg.h>

static int	search_for_tags(const char *tags, char c, char *tag_ptr)
{
	tag_ptr = ft_strchr(tags, c);
	if (tag_ptr)
		return (c);
	return (0);
}

static char	*str_chr_dup(char c)
{
	char	*temp;

	if (c == 0)
		return (NULL);
	temp = ft_strdup("");
	temp[0] = c;
	return (temp);
}

static int	str_arg(int arg_type, va_list args)
{
	char	*str;

	if (arg_type == '%')
		str = "%";
	if (arg_type == 'c')
		str = str_chr_dup(va_arg(args, int));
	if (arg_type == 's')
		str = ft_strdup(va_arg(args, char *));
	if (ft_strchr("id", arg_type))
		str = ft_itoa(va_arg(args, int));
	if (arg_type == 'u')
		str = ft_itoa(va_arg(args, unsigned int));
	if (arg_type == 'x')
		str = ft_hex(va_arg(args, unsigned long), arg_type);
	if (arg_type == 'X')
		str = ft_hex(va_arg(args, unsigned long), arg_type);
	if (arg_type == 'p')
		str = ft_hex(va_arg(args, unsigned long), arg_type);
	if (str)
		ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}

int	ft_printf(const char *str, ...)
{
	const char	*tags = "cspdiuxX%";
	char		*found;
	va_list		args;
	size_t		tag;
	size_t		print_length;

	found = (char *)str;
	va_start(args, str);
	tag = 0;
	print_length = 0;
	while (*found)
	{
		if (*found == '%')
		{
			found++;
			tag = search_for_tags(tags, *found, found);
			if (tag)
				print_length += str_arg(tag, args);
		}
		else
		{
			print_length++;
			ft_putchar_fd(*found, 1);
		}
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
	char	*test_str;
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
	ft_printf("%d\n", ft_printf("ft_printf %%u: %u |", test_num - 3));
	// %s
	test_str = "string";
	printf("%d\n", printf("printf %%s: %s |", test_str));
	ft_printf("%d\n", ft_printf("ft_printf %%s: %s |", test_str) - 3);
	// %p
	ptr = "test";
	printf("%d\n", printf("printf %%p: %p |", ptr));
	ft_printf("%d\n", ft_printf("ft_printf %%p: %p |", ptr));
	// %x
	printf("%d\n", printf("printf %%x: %x |", test_num));
	ft_printf("%d\n", ft_printf("ft_printf %%x: %x |", test_num));
	// %X
	printf("%d\n", printf("printf %%X: %X |", test_num));
	ft_printf("%d\n", ft_printf("ft_printf %%X: %X |", test_num));
	return (0);
}