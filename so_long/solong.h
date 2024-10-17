/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maciej <maciej@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:25:34 by maciej            #+#    #+#             */
/*   Updated: 2024/08/10 21:25:34 by maciej           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <errno.h>
#include "mlx/mlx.h"
#include "ft_printf.h"

#define GRIDSIZE 96
#define UP 65362
#define DOWN 65364
#define LEFT 65361 
#define RIGHT 65363
#define W 119
#define S 115
#define A 97
#define D 100

typedef struct s_mlxstuff
{
	void	*mlx;
	void	*win;
}	t_mlxstuff;

typedef struct s_vector2
{
	size_t	x;
	size_t	y;
}	t_vector2;

typedef struct s_everything
{
	t_mlxstuff		m;
	t_vector2		ppos;
	void			*psprit;
	void			*bloksprit;
	void			*fill;
	void			*item;
	void			*exit;
	int				gridsize;
	int				item_left;
	char			pe_count[2];
	unsigned int	step_count;
	size_t			w;
	size_t			h;
	int				mapfile;
	char			**map;

}	t_everything;

/* FUNCTIONS */
void	safree(void *ptr);
char	*strdupa(const char *s1);
void	*kallok(size_t count, size_t size);
char	*reallok(char *ptr, size_t newsize);
char	**grow_array(char **arr, size_t newsize);
char	*haschar(const char *s, int c);
size_t	length(char const *str);
void	cat(char *dst, const char *src);
int		my_strncmp(const char *s1, const char *s2, size_t limiter);
void	nuke_everything(t_everything *game);
void	checkmaplen(t_everything *game, char *temp, size_t y, char *error);
void	checktop_bot(char *temp, char *error);
char	count_stuff(char blok, t_everything *game);
void	check_quantity(t_everything *game, char *error);
char	*get_line_simple(int fd, t_everything *game, size_t y);
char	readmap(int fd, t_everything *game);
void	checktop_bot(char *temp, char *error);
void	checkmaplen(t_everything *game, char *temp, size_t y, char *error);
int		flood_fill(char **ghostmap, t_vector2 pos, int *counters);
int		path_check(t_everything *game, t_vector2 startpos);
void	nuke_everything(t_everything *game);
void	init_stuff(t_everything *game);
void	init_mlx(t_everything *game);
void	checkfile(char argc, char **args);
void	error_escape(t_everything *game, char errcode, char *custom_message);
int		key_hook(int keycode, t_everything *game);
void	pmove(int keycode, t_everything *game);
void	printmap(t_everything *game);
void	parseblok(t_everything *game, char blok,
			t_vector2 pos, int *item_count);
int		end_game(t_everything *game);
size_t	yclamp(size_t ycheck);
