/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapstuff1.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiernac <mbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:06:25 by maciej            #+#    #+#             */
/*   Updated: 2024/09/27 19:46:48 by mbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

char	count_stuff(char blok, t_everything *game)
{
	if (blok == 'C')
	{
		game->item_left += 1;
		return (0);
	}
	else if (blok == 'E')
	{
		game->pe_count[1] += 1;
		return (0);
	}
	else if (blok == 'P')
	{
		game->pe_count[0] += 1;
		return (0);
	}
	else if (blok == '1')
		return (0);
	else if (blok == '0')
		return (0);
	else if (blok == '\n')
		return (0);
	game->pe_count[0] = 42;
	return (1);
}

void	check_quantity(t_everything *game, char *error)
{
	if (game->pe_count[0] != 1 || game->pe_count[1] != 1)
		*error = 1;
	if (game->item_left <= 0)
		*error = 1;
}

char	readmap(int fd, t_everything *game)
{
	char			*temp;
	static size_t	y;
	static char		error;

	game->map = kallok(2, 8);
	while (1)
	{
		temp = get_line_simple(fd, game, y);
		if (temp[0] == 0)
		{
			free(temp);
			break ;
		}
		game->w = length(temp);
		if (y == 0)
			checktop_bot(temp, &error);
		checkmaplen(game, temp, y, &error);
		game->map[y] = temp;
		y++;
		game->map = grow_array(game->map, y + 2);
	}
	checktop_bot(game->map[yclamp(y - 1)], &error);
	check_quantity(game, &error);
	game->h = y;
	return (error);
}

void	checktop_bot(char *temp, char *error)
{
	size_t	i;

	i = 0;
	while (i < length(temp))
	{
		if (temp[i] != '1')
		{
			*error = 1;
		}
		i++;
	}
}

void	checkmaplen(t_everything *game, char *temp, size_t y, char *error)
{
	if (temp[0] != '1' || temp[length(temp) - 1] != '1')
	{
		*error = 1;
	}
	if (y < 1)
		return ;
	if (length(game->map[y - 1]) != game->w)
	{
		*error = 1;
	}
}
