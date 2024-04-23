/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:45:57 by jbiernac          #+#    #+#             */
/*   Updated: 2024/04/23 16:00:24 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
# include <stdarg.h>
# include "libftprintf.h"

static int search_for_tags(const char* tags, char *str, size_t len, char* tag_ptr)
{
	size_t i = 0;
	char* tag;
	while (tags[i] != 0)
	{
		tag = "%"+ tags[i];
		tag_ptr = ft_strnstr(tag, str, len);
		if (tag_ptr)
			return tags[i];
		i++;
	}
	return 0;
}

static void put_arg(int arg_type, va_list args) 
{
	if (arg_type == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	if (arg_type == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	// if (arg_type == 'p')
		//  ft_putnbr_fd(va_arg(args, pointer), 1);
	// if (arg_type == 'd')
		//  ft_putnbr_fd(va_arg(args, decimal), 1);
	if (arg_type == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	// if (arg_type == 'u')
		// ft_putnbr_fd(va_arg(args, unsigned decimal), 1);
	// if (arg_type == 'x')
		// ft_putnbr_fd(va_arg(args, hex low), 1);
	// if (arg_type == 'X')
		// ft_putnbr_fd(va_arg(args, hex up), 1);
	if (arg_type == '%')
		ft_putchar_fd('%', 1);
}

int ft_printf(const char *str, ...)
{
	const char* tags = "cspdiuxX%";
	char *str_dump;
	char *found = (char *) str;

	va_list args;
	va_start(args, str);

	size_t i = 0;
	size_t t = 0;
	size_t len = ft_strlen(str);

	while (i < len)
	{
		t = search_for_tags(tags, found, len, found);
		if(t)
		{
			len = ft_strlen(found);
			str_dump = ft_substr(found, 0, i);
			ft_putstr_fd(str_dump, 1);
			free(str_dump);
			put_arg(t, args);
		}
		i++;
	}

	va_end(args);
	return 0;
}

int main()
{
	// %c
	char test_chr = 'c';
	printf("printf %%c: %c |", test_chr);
	ft_printf("ft_printf %%c: %c |", test_chr);
	
	// %%
	printf("printf %%%%: %% |");
	ft_printf("ft_printf %%%%: %% |");

	// %i
	int test_num = 42;
	printf("printf %%i: %i |", test_num);
	// ft_printf("ft_printf %%i: %i |", test_num);

	// %s
	char *test_str = "string";
	printf("printf %%s: %s |", test_str);
	// ft_printf("ft_printf %%s: %s |", test_str);

	// todo: %d
	printf("printf %%d: %d |", test_num);
	// ft_printf("ft_printf %%d: %d |", test_num);

	// todo: %p
	char *ptr = "test";
	printf("printf %%p: %p |", ptr);
	// ft_printf("ft_printf %%p: %p |", ptr);

	// todo: %u
	printf("printf %%u: %u |", test_num);
	// ft_printf("ft_printf %%u: %u |", test_num);


	// todo: %x
	printf("printf %%x: %x |", test_num);
	// ft_printf("ft_printf %%x: %x |", test_num);

	// todo: %X
	printf("printf %%X: %X |", test_num);
	// ft_printf("ft_printf %%X: %X |", test_num);
	ft_putstr_fd("\n", 1);

	return 0;
}




