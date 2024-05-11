/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:45:57 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/11 12:04:57 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

# include <stdarg.h>
# include "ft_printf.h"

static int search_for_tags(const char* tags, char c, char* tag_ptr)
{
	tag_ptr = ft_strchr(tags, c);
	if (tag_ptr)
		return c;
	return 0;
}

static char * str_chr_dup(char c)
{
	char *temp = ft_strdup("");
	temp[0] = c;
	return temp;
}

static char* str_arg(int arg_type, va_list args)
{
	if (arg_type == '%')
		return "%";
	if (arg_type == 'c')
		return str_chr_dup(va_arg(args, int));
	if (arg_type == 's')
		return (ft_strdup(va_arg(args, char *)));
	if (ft_strchr("id", arg_type))
		return(ft_itoa(va_arg(args, int)));
	if (arg_type == 'u')
		return(ft_itoa(va_arg(args, unsigned int)));
	if (arg_type == 'x')
		return(ft_hex(va_arg(args, unsigned long), arg_type));
	if (arg_type == 'X')
		return(ft_hex(va_arg(args, unsigned long), arg_type));
	if (arg_type == 'p')
		return(ft_hex(va_arg(args, unsigned long), arg_type));
	return 0;
}

int ft_printf(const char *str, ...)
{
	const char* tags = "cspdiuxX%";
	char *found = (char *) str;
	char *tmp = ft_strdup("");

	va_list args;
	va_start(args, str);

	size_t i = 0;
	size_t tag = 0;
	size_t len = ft_strlen(str);
	size_t print_lenght = 0;

	while (i < len)
	{
		if (found[i] == '%')
		{
			tag = search_for_tags(tags, found[i+1], found);
			if(tag != 0)
			{
				tmp = str_arg(tag, args);
				print_lenght += ft_strlen(tmp);
				ft_putstr_fd(tmp, 1);
				i++;
			}
		}
		else
		{
			print_lenght++;
			ft_putchar_fd(found[i], 1);
		}
		i++;
	}

	va_end(args);
	return print_lenght;
}

// #include <stdio.h>
// int main()
// {
// 	// %c
// 	char test_chr = 'c';
// 	printf("%d\n", printf("printf %%c: %c |", test_chr));
// 	ft_printf("%d\n", ft_printf("ft_printf %%c: %c |", test_chr) - 3);
	
// 	// %%
// 	printf("%d\n", printf("printf %%%%: %% |"));
// 	ft_printf("%d\n", ft_printf("ft_printf %%%%: %% |") - 3);

// 	// %i
// 	int test_num = 42;
// 	printf("%d\n", printf("printf %%i: %i |", test_num));
// 	ft_printf("%d\n", ft_printf("ft_printf %%i: %i |", test_num) - 3);

// 	// %d
// 	printf("%d\n", printf("printf %%d: %d |", test_num));
// 	ft_printf("%d\n", ft_printf("ft_printf %%d: %d |", test_num) - 3);

// 	// %u
// 	printf("%d\n", printf("printf %%u: %u |", test_num));
// 	ft_printf("%d\n", ft_printf("ft_printf %%u: %u |", test_num - 3));

// 	// %s
// 	char *test_str = "string";
// 	printf("%d\n", printf("printf %%s: %s |", test_str));
// 	ft_printf("%d\n", ft_printf("ft_printf %%s: %s |", test_str) - 3);

// 	// %p
// 	char *ptr = "test";
// 	printf("%d\n", printf("printf %%p: %p |", ptr));
// 	ft_printf("%d\n", ft_printf("ft_printf %%p: %p |", ptr));

// 	// %x
// 	printf("%d\n", printf("printf %%x: %x |", test_num));
// 	ft_printf("%d\n", ft_printf("ft_printf %%x: %x |", test_num));

// 	// %X
// 	printf("%d\n", printf("printf %%X: %X |", test_num));
// 	ft_printf("%d\n", ft_printf("ft_printf %%X: %X |", test_num));

// 	return 0;
// }




