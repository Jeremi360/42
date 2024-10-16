/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/16 17:31:14 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/16 17:35:38 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "push_swap.h"

int	main(int argc, char **argv)
{
	t_all	all;
	int		*num;
	int		*index;
	char	**bin;

	if (argc == 1)
		exit(true);
	argc--;
	argv++;
	num = malloc(sizeof(int) * argc);
	if (!num)
		exit(EXIT_FAILURE);
	validate_args(argc, argv);
	transform_args(argc, argv, num);
	check_duplicates(argc, num);
	if (array_is_sorted(argc, num))
		exit(true);
	index = link_index(argc, num);
	bin = string_bin(argc, index);
	init_struct(&all, argc);
	fill_stack_a(&all, bin, index);
	push_swap(&all);
	freeing(&all, num, index, bin);
	return (false);
}

void	init_struct(t_all *all, int argc)
{
	all->a = NULL;
	all->b = NULL;
	all->len = argc;
}

void	fill_stack_a(t_all *all, char **bin, int *index)
{
	int	i;

	if (all->len)
	{
		i = 0;
		all->a = ps_lstnew(bin[i], index[i]);
		while (i < all->len - 1)
		{
			i++;
			ps_lstadd_back(&all->a, ps_lstnew(bin[i], index[i]));
		}
	}
}

void	push_swap(t_all *all)
{
	if (all->len <= 5)
		short_push_swap(all);
	else
		long_push_swap(all);
}
