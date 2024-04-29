/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:45:57 by jbiernac          #+#    #+#             */
/*   Updated: 2024/04/29 13:49:10 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
# include <stdarg.h>
# include "libftprintf.h"

static int search_for_tags(const char* tags, char c, char* tag_ptr)
{
	printf("tag_to_find: %c\n", c);
	tag_ptr = ft_strchr(tags, c);
	if (tag_ptr)
	{
		printf("tag_ptr: %c\n", c);
		return c;
	}
	return 0;
}

static char * str_chr_dup(char c)
{
	char *temp = ft_strdup(" ");
	temp[1] = c;
	return temp;
}

static char* str_arg(int arg_type, va_list args)
{
	if (arg_type == 'c')
		return str_chr_dup(va_arg(args, int));
	if (arg_type == 's')
		return (va_arg(args, char *));
	// if (arg_type == 'p')
		//  return(va_arg(args, pointer), 1);
	// if (arg_type == 'd')
		//  return(va_arg(args, decimal), 1);
	if (arg_type == 'i')
		return(ft_itoa(va_arg(args, int)));
	// if (arg_type == 'u')
		// return(va_arg(args, unsigned decimal), 1);
	// if (arg_type == 'x')
		// return(va_arg(args, hex low), 1);
	// if (arg_type == 'X')
		// return(va_arg(args, hex up), 1);
	if (arg_type == '%')
		return "%";
	
	return NULL;
}

int ft_printf(const char *str, ...)
{
	const char* tags = "cspdiuxX%";
	char *found = (char *) str;
	char *result = ft_strdup("");

	va_list args;
	va_start(args, str);

	size_t i = 0;
	size_t tag = 0;
	size_t len = ft_strlen(str);

	while (i < len)
	{
		if (found[i] == '%')
		{
			i++;
			tag = search_for_tags(tags, found[i], found);
			if(tag != 0)
			{
				result = ft_strjoin(result, str_arg(tag, args));
				printf("new_str: %s\n", result);
			}
		}
		else
		{
			result += found[i];
			printf("new_str: %s\n", result);
		}
		i++;
	}

	va_end(args);
	ft_putstr_fd(result, 1);
	return 0;
}

int main()
{
	// %c
	char test_chr = 'c';
	// printf("printf %%c: %c |", test_chr);
	ft_printf("ft_printf %%c: %c |", test_chr);
	
	// %%
	// printf("printf %%%%: %% |");
	ft_printf("ft_printf %%%%: %% |");

	// %i
	int test_num = 42;
	// printf("printf %%i: %i |", test_num);
	ft_printf("ft_printf %%i: %i |", test_num);

	// %s
	char *test_str = "string";
	// printf("printf %%s: %s |", test_str);
	ft_printf("ft_printf %%s: %s |", test_str);

	// todo: %d
	// printf("printf %%d: %d |", test_num);
	// ft_printf("ft_printf %%d: %d |", test_num);

	// todo: %p
	// char *ptr = "test";
	// printf("printf %%p: %p |", ptr);
	// ft_printf("ft_printf %%p: %p |", ptr);

	// todo: %u
	// printf("printf %%u: %u |", test_num);
	// ft_printf("ft_printf %%u: %u |", test_num);


	// todo: %x
	// printf("printf %%x: %x |", test_num);
	// ft_printf("ft_printf %%x: %x |", test_num);

	// todo: %X
	// printf("printf %%X: %X |", test_num);
	// ft_printf("ft_printf %%X: %X |", test_num);

	return 0;
}




