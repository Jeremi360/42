/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiernac <mbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/30 22:29:35 by mbiernac          #+#    #+#             */
/*   Updated: 2024/06/30 22:29:35 by mbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

int		ft_printf(const char *str, ...);
int		ft_putstr_c(char *str);
int		ft_putchar_c(char c);
void	ft_putnbr_c(int n, unsigned int *add);
void	ft_putuns_c(unsigned int n, unsigned int *add);
void	ft_longhex_c(unsigned long n, char caps, unsigned int *add);
void	putptr(unsigned long tmp, unsigned int *add);
size_t	process_arg(va_list list, char sigil);

#endif