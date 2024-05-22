/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:51:37 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/22 16:08:50 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_printf(const char *str, ...);
int	ft_print_hex(unsigned long nb, char format);
int	ft_print_str(char *str);
int	ft_print_char(char c);
int	ft_print_int(int n);
int	ft_print_uint(unsigned int n);

#endif
