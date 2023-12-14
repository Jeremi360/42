/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_throw_error.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:19:44 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/03 14:19:47 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str);

void	ft_throw_error(int mod, char *example)
{
	char *msg;
	char *msg2;
	char *msg3;

	if (mod == 0)
	{
		msg = "No arguments where passed";
	}
	if (mod == 1)
	{
		msg = "Wrong format of arguments where passed";
	}
	ft_putstr(msg);
	
	msg2 = ",expected was 4 x 1-4 digits in double quest as an first and only argument.\n";
	msg3 = "For example: \"";
	
	ft_putstr(msg2);
	ft_putstr(msg3);
	ft_putstr(example);
	ft_putstr("\"");
}
