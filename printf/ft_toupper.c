/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:32:41 by jbiernac         #+#    #+#             */
/*   Updated: 2024/02/27 13:38:56 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_toupper(int c)
{
	int	delta;

	delta = 'a' - 'A';
	if (c >= 'a' && c <= 'z')
	{
		return (c - delta);
	}
	return (c);
}
