/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_lowercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:02:48 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/06 13:02:50 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_lowercase(char *str)
{
	int	id;
	int	is_lower;

	id = 0;
	is_lower = 0;
	while (str[id] != '\0')
	{
		if (str[id] >= 'a' && str[id] <= 'z')
		{
			is_lower++;
		}
		id++;
	}
	if (id == is_lower)
	{
		return (1);
	}
	return (0);
}
