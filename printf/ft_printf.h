/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/16 09:51:37 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/11 12:03:48 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FTPRINT_H
# define FTPRINT_H

# include "libft.h"

int ft_printf(const char *, ...);
char*	ft_hex(unsigned long nb, char format);

#endif

