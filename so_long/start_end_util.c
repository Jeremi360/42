/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   start_end_util.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maciej <maciej@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:30:56 by maciej            #+#    #+#             */
/*   Updated: 2024/09/26 15:31:01 by maciej           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	init_mlx(t_everything *game)
{
	game->m.mlx = mlx_init();
	game->gridsize = GRIDSIZE;
	game->fill = mlx_xpm_file_to_image(game->m.mlx, "./fill.xpm",
			&game->gridsize, &game->gridsize);
	game->bloksprit = mlx_xpm_file_to_image(game->m.mlx, "./murek.xpm",
			&game->gridsize, &game->gridsize);
	game->psprit = mlx_xpm_file_to_image(game->m.mlx, "./zulek.xpm",
			&game->gridsize, &game->gridsize);
	game->item = mlx_xpm_file_to_image(game->m.mlx, "./jabol.xpm",
			&game->gridsize, &game->gridsize);
	game->exit = mlx_xpm_file_to_image(game->m.mlx, "./exit_x.xpm",
			&game->gridsize, &game->gridsize);
	game->m.win = mlx_new_window(game->m.mlx, GRIDSIZE * game->w, GRIDSIZE
			* game->h, "So Long");
}

void	init_stuff(t_everything *game)
{
	game->m.mlx = NULL;
	game->item_left = 0;
	game->pe_count[0] = 0;
	game->pe_count[1] = 0;
	game->step_count = 0;
}

void	error_escape(t_everything *game, char errcode, char *custom_message)
{
	if (game)
		nuke_everything(game);
	errno = errcode;
	perror(custom_message);
	exit(-1);
}

void	nuke_everything(t_everything *game)
{
	int	y;

	y = game->h - 1;
	while (y >= 0)
	{
		free(game->map[y]);
		y--;
	}
	free(game->map);
	if (!game->m.mlx)
		return ;
	mlx_destroy_image(game->m.mlx, game->psprit);
	mlx_destroy_image(game->m.mlx, game->bloksprit);
	mlx_destroy_image(game->m.mlx, game->fill);
	mlx_destroy_image(game->m.mlx, game->item);
	mlx_destroy_image(game->m.mlx, game->exit);
}

int	end_game(t_everything *game)
{
	write(1, "\nEND\n", 5);
	nuke_everything(game);
	mlx_clear_window(game->m.mlx, game->m.win);
	mlx_destroy_window(game->m.mlx, game->m.win);
	mlx_destroy_display(game->m.mlx);
	free(game->m.mlx);
	exit(0);
}
