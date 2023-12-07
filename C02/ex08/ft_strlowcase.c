/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/06 13:03:14 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/06 13:06:02 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	int	id;
	int	d;

	d = 'A' - 'a';
	id = 0;
	while (str[id] != '\0')
	{
		if (str[id] >= 'A' && str[id] <= 'Z')
		{
			str[id] -= d;
		}
		id++;
	}
	return (str);
}
