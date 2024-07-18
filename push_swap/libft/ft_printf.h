/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:51:37 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/24 11:19:46 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft.h"
# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int	ft_print_char(char c);
int	ft_print_hex(unsigned int nb, char format);
int	ft_print_ptr(unsigned long ptr);
int	ft_print_str(char *str);
int	ft_print_int(int n);
int	ft_print_uint(unsigned int n);
int	ft_printf(const char *str, ...);

#endif
