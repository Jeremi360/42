/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spilt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:52:27 by jeremi360         #+#    #+#             */
/*   Updated: 2024/03/06 14:34:33 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	count_words(const char *str, char c)
{
	size_t	x;
	size_t	y;

	x = 0;
	y = 1;
	while (str[x] != '\0')
	{
		if (str[x] == c)
		{
			y++;
		}
		x++;
	}
	return (y);
}

size_t	get_word_length(const char *str, char c, size_t start_index)
{
	size_t	length;

	length = 0;
	while (str[start_index + length] != c && str[start_index + length] != '\0')
	{
		length++;
	}
	return (length);
}

char	**ft_split(char const *str, char c)
{
	char	**splited;
	size_t	x;
	size_t	y;
	size_t	i;

	x = 0;
	y = 0;
	i = 0;
	splited = ft_calloc(count_words(str, c), sizeof(char *));
	while (y < count_words(str, c))
	{
		splited[y] = ft_calloc(get_word_length(str, c, x) + 1, sizeof(char));
		while (str[x] != c && str[x] != '\0')
		{
			splited[y][i] = str[x];
			i++;
			x++;
		}
		splited[y][i] = 0;
		i = 0;
		y++;
		x++;
	}
	splited[y] = 0;
	return (splited);
}
