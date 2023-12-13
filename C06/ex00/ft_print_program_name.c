/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_program_name.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/08 11:31:00 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/12 15:44:14 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

int	main(int argc, char *argv[])
{
	(void) argc;
	ft_putstr(argv[0]);
	ft_putchar('\n');
	return (0);
}
