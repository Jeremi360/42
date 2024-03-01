/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spilt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:52:27 by jeremi360         #+#    #+#             */
/*   Updated: 2024/03/01 18:00:14 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(const char *str, char c)
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (str[x] != '\0')
	{
		if (str[x] != c)
		{
			y++;
		}
		x++;
	}
	return (y);
}

char	**ft_split(char const *str, char c)
{
	char	**splited;
	int		x;
	int		y;
	int		i;

	x = 0;
	y = 0;
	i = 0;
	splited = ft_calloc(count_words(str, c) + 1, sizeof(char *));
	while (str[x] != '\0')
	{
		if (str[x] != c)
		{
			splited[y][i] = str[x];
			i++;
		}
		else
		{
			i = 0;
			y++;
			x++;
		}
		x++;
	}
	return (splited);
}
