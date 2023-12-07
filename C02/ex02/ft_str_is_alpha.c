/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:02:33 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/06 13:02:35 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	int	id;
	int	is_alpha;

	id = 0;
	is_alpha = 0;
	while (str[id] != '\0')
	{
		if (str[id] >= 'a' && str[id] <= 'z')
		{
			is_alpha++;
		}
		else if (str[id] >= 'A' && str[id] <= 'Z')
		{
			is_alpha++;
		}
		id++;
	}
	if (id == is_alpha)
	{
		return (1);
	}
	return (0);
}
