/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 15:29:16 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/05 12:56:53 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>

char	*ft_is_input_valid(int argc, char *argv[]);

void	ft_putchar(char c);

void	ft_putstr(char *str);

void	ft_print_coord(int x, int y, int tab[4][4]);

void	ft_print_tab(int tab[4][4]);

void	ft_fill_data_tab(int input_tab[4][4], char input[]);

void	ft_throw_error(int mod, char *example);

void	ft_rev_int_tab(int *tab, int size);

int	ft_gen_ones(int bf[4][4])
{
	int	x;
	int	y;
	//int	bf[4][4];
	
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			bf[y][x] = 1;
			x++;
		}
		y++;
	}
	//return (*bf);
}

int	ft_are_diff_vals(int arr[4])
{
	int	flag;
	int	i;
	int	j;

	flag = 1;
	i = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			if (i != j)
			{
				if (arr[i] == arr[j])
				{
					flag = 0;
					break;
				}
				
			}
			j++;
		}
		i++;
	}
	return (flag);
}

int	ft_is_arr_valid(int arr[4], int visible)
{
	int	i;
	int	last;
	int	record;

	last = 0;
	//ft_putstr("outside");
	if (ft_are_diff_vals(arr))
	{
		//ft_putstr("inside");
		record = 0;
		i = 0;
		while (i < 4)
		{
			if (arr[i] > last)
			{
				last = arr[i];
				record++;
			}
			i++;
		}
		if (record == visible)	return (1);
		else	return (0);
	}
	else
	{
		return (0);
	}
}

void	ft_slove(int arr[4], int visible)
{
	int	i;

	if (visible == 1)
	{
		arr[0] = 4;
		arr[1] = 3;
		arr[2] = 2;
		arr[3] = 1;
	}

	if (visible == 2)
	{
		arr[0] = 3;
		arr[1] = 4;
		arr[2] = 2;
		arr[3] = 1; 
	}

	if (visible == 3)
	{
		arr[0] = 3;
		arr[1] = 2;
		arr[2] = 4;
		arr[3] = 1; 
	}

	if (visible == 3)
	{
		arr[0] = 2;
		arr[1] = 3;
		arr[2] = 4;
		arr[3] = 1; 
	}
}

int	ft_is_tab_valid(int tab[4][4], int input_tab[4][4])
{
	int	flag;
	int	col[4];
	int	x;
	int	y;

	flag = 1;
	y = 0;
	while (y < 4)
	{
		if (!(ft_is_arr_valid(tab[y], input_tab[0][y])))	flag = 0;
		ft_rev_int_tab(tab[y], 4);
		if (!(ft_is_arr_valid(tab[y], input_tab[1][y])))	flag = 0;
		ft_rev_int_tab(tab[y], 4);
		y++;
	}
	x = 0;
	y = 0;
	while (x < 4)
	{
		y = 0;
		while (y < 4)
		{
			col[y] = tab[y][x];
			y++;
		}
		if (!(ft_is_arr_valid(col, input_tab[2][x])))	flag = 0;
		ft_rev_int_tab(col, 4);
		if (!(ft_is_arr_valid(col, input_tab[3][x])))	flag = 0;
		ft_rev_int_tab(col, 4);
		x++;
	}
	return (flag);
}



void	ft_map_table(/*int tab[4][4],*/ int input_tab[4][4]/*, int lut[4][4]*/)
{
	int	x = 0;
	int	y = 0;
	int	z = 1;
	int	brute_F[4][4];
	int	i;
	int d;

	ft_putstr("Mapping table\n");
	//brute_F = ft_gen_ones();
	ft_gen_ones(brute_F);

	ft_print_tab(brute_F);
	ft_putstr("\n");

	i = 0;
	z = 1;
	while (z < 5)
	{
		y = 0;
		while (y < 4)
		{
			//TODO: przypisac tab = brute_F
			x = 0;
			while (x < 4)
			{
				int d = x + y;
				brute_F[y][x] = d;

				printf("%.2f%% | y = %d | x = %d | z = %d\n", (i/64.0)*100, y, x, z);
				// ft_print_tab(brute_F);
				// ft_putstr("\n\n");
				if (!ft_is_arr_valid(brute_F[y], input_tab[y][x]))
				{
					ft_putstr("is invalid yx\n");
					ft_slove(brute_F[y], input_tab[y][x]);
					// z--;
				}
				
				else if (!ft_is_arr_valid(brute_F[x], input_tab[x][y]))
				{
					ft_putstr("is invalid xy\n");
					ft_slove(brute_F[x], input_tab[x][y]);
					//ft_putstr("Correct tab!\n");
					//ft_print_tab(brute_F);
					// z--;
					
				}
				else
				{
					ft_putstr("Correct tab!\n");
					break;
				}

				if (z < 0)
				{
					z = 1;
				}

				ft_print_tab(brute_F);
				ft_putstr("\n\n");
				i++;
				x++;
			}
			y++;
		}
		z++;
	}
}

int	main(int argc, char *argv[])
{
	//int	tab[4][4];
	int	input_tab[4][4];
	char	*input;
	
	// Input error handling
	input = ft_is_input_valid(argc, argv);
	if (*input == '\0')	return (1);

	// Filling input_tab with user input
	ft_fill_data_tab(input_tab, input);

	// Brute force correct table
	ft_map_table(/*tab,*/input_tab);
	
	//ft_print_tab(tab);

	return (0);
}
