/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_numeric.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:02:40 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/06 13:02:42 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_numeric(char *str)
{
	int	id;
	int	is_num;

	id = 0;
	is_num = 0;
	while (str[id] != '\0')
	{
		if (str[id] >= '0' && str[id] <= '9')
		{
			is_num++;
		}
		id++;
	}
	if (id == is_num)
	{
		return (1);
	}
	return (0);
}
