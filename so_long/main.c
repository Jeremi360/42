/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiernac <mbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:04:13 by maciej            #+#    #+#             */
/*   Updated: 2024/09/27 20:43:42 by mbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include "mlx/mlx.h"
#include "solong.h"

void	parseblok(t_everything *game, char blok, t_vector2 pos, int *item_count)
{
	if (blok == '1')
		mlx_put_image_to_window(game->m.mlx, game->m.win, game->bloksprit,
			GRIDSIZE * pos.x, GRIDSIZE * pos.y);
	else if (blok == '0')
		mlx_put_image_to_window(game->m.mlx, game->m.win, game->fill, GRIDSIZE
			* pos.x, GRIDSIZE * pos.y);
	else if (blok == 'C')
	{
		mlx_put_image_to_window(game->m.mlx, game->m.win, game->item, GRIDSIZE
			* pos.x, GRIDSIZE * pos.y);
		*item_count += 1;
	}
	else if (blok == 'E')
		mlx_put_image_to_window(game->m.mlx, game->m.win, game->exit, GRIDSIZE
			* pos.x, GRIDSIZE * pos.y);
	else if (blok == 'P')
	{
		mlx_put_image_to_window(game->m.mlx, game->m.win, game->fill, GRIDSIZE
			* pos.x, GRIDSIZE * pos.y);
		game->map[pos.y][pos.x] = '0';
	}
}

void	printmap(t_everything *game)
{
	t_vector2	pos;
	int			item_count;

	pos.x = 0;
	pos.y = 0;
	item_count = 0;
	while (pos.y < game->h)
	{
		pos.x = 0;
		while (pos.x < game->w)
		{
			parseblok(game, game->map[pos.y][pos.x], pos, &item_count);
			pos.x++;
		}
		pos.y++;
	}
	game->item_left = item_count;
	mlx_put_image_to_window(game->m.mlx, game->m.win, game->psprit, GRIDSIZE
		* game->ppos.x, GRIDSIZE * game->ppos.y);
}

void	pmove(int keycode, t_everything *game)
{
	t_vector2	cast;

	cast = game->ppos;
	if (keycode == RIGHT || keycode == D)
		cast.x += 1;
	if (keycode == LEFT || keycode == A)
		cast.x -= 1;
	if (keycode == UP || keycode == W)
		cast.y -= 1;
	if (keycode == DOWN || keycode == S)
		cast.y += 1;
	if (game->ppos.x == cast.x && game->ppos.y == cast.y)
		return ;
	if (game->map[cast.y][cast.x] != '1')
	{
		game->ppos = cast;
		game->step_count++;
		ft_printf("steps: %d\n", game->step_count);
		if (game->map[cast.y][cast.x] == 'C')
			game->map[cast.y][cast.x] = '0';
		if (game->map[cast.y][cast.x] == 'E' && game->item_left == 0)
			end_game(game);
	}
}

int	key_hook(int keycode, t_everything *game)
{
	if (keycode == 65307)
	{
		end_game(game);
		return (0);
	}
	pmove(keycode, game);
	printmap(game);
	return (1);
}

int	main(int argc, char *argv[])
{
	t_everything	game;
	char			error_check;

	error_check = 0;
	checkfile(argc, argv);
	game.mapfile = open(argv[1], O_RDONLY);
	if (game.mapfile < 0)
		error_escape(NULL, ENOENT, "");
	init_stuff(&game);
	error_check = readmap(game.mapfile, &game);
	if (error_check || game.w > 32 || game.h > 32)
		error_escape(&game, EINVAL, "map broken");
	error_check = path_check(&game, game.ppos);
	if (error_check)
		error_escape(&game, EINVAL, "map completion impossible");
	init_mlx(&game);
	printmap(&game);
	mlx_key_hook(game.m.win, key_hook, &game);
	mlx_hook(game.m.win, 17, 0, end_game, &game);
	mlx_loop(game.m.mlx);
	return (0);
}
