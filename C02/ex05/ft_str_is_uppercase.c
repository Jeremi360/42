/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_uppercase.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:02:56 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/06 13:02:58 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_uppercase(char *str)
{
	int	id;
	int	is_upper;

	id = 0;
	is_upper = 0;
	while (str[id] != '\0')
	{
		if (str[id] >= 'A' && str[id] <= 'Z')
		{
			is_upper++;
		}
		id++;
	}
	if (id == is_upper)
	{
		return (1);
	}
	return (0);
}
