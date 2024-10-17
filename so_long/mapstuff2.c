/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mapstuff2.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiernac <mbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:12:19 by maciej            #+#    #+#             */
/*   Updated: 2024/09/27 20:36:18 by mbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

char	*get_line_simple(int fd, t_everything *game, size_t y)
{
	char	*result;
	char	chonk[1];
	size_t	offset;
	char	did_read;

	chonk[0] = 0;
	result = kallok(2, 1);
	offset = 0;
	did_read = 2;
	while (!haschar(chonk, '\n'))
	{
		did_read = read(fd, chonk, 1);
		if (did_read <= 0)
			return (result);
		result = reallok(result, offset + 2);
		result[offset] = chonk[0];
		count_stuff(chonk[0], game);
		if (chonk[0] == 'P')
		{
			game->ppos.x = offset;
			game->ppos.y = y;
		}
		offset++;
	}
	return (result);
}

int	flood_fill(char **ghostmap, t_vector2 pos, int *counters)
{
	t_vector2	cast;

	if (ghostmap[pos.y][pos.x] == '1')
		return (0);
	if (ghostmap[pos.y][pos.x] == 'E')
		counters[1] += 1;
	if (ghostmap[pos.y][pos.x] == 'C')
		counters[0] += 1;
	ghostmap[pos.y][pos.x] = '1';
	cast = pos;
	cast.x += 1;
	flood_fill(ghostmap, cast, counters);
	cast.x -= 2;
	flood_fill(ghostmap, cast, counters);
	cast.x += 1;
	cast.y -= 1;
	flood_fill(ghostmap, cast, counters);
	cast.y += 2;
	flood_fill(ghostmap, cast, counters);
	return (0);
}

int	path_check(t_everything *game, t_vector2 startpos)
{
	char	**ghostmap;
	size_t	y;
	int		error;
	int		*counters;

	y = 0;
	error = 0;
	counters = kallok(3, 8);
	ghostmap = kallok(game->h, 8);
	while (y < game->h)
	{
		ghostmap[y] = strdupa(game->map[y]);
		y++;
	}
	flood_fill(ghostmap, startpos, counters);
	if (counters[0] != game->item_left || counters[1] != 1)
		error = 1;
	while (y > 0)
	{
		free(ghostmap[y - 1]);
		y--;
	}
	free(ghostmap);
	free(counters);
	return (error);
}

void	checkfile(char argc, char **args)
{
	char	*str;

	if (argc < 2)
		error_escape(NULL, EINVAL, "no map file specified");
	if (argc > 2)
		error_escape(NULL, E2BIG, "");
	str = args[1];
	str += length(str) - 4;
	if (my_strncmp(str, ".ber", 4) != 0)
	{
		error_escape(NULL, EINVAL, "not .ber extension");
	}
}
