/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_tab.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:18:19 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/03 14:18:22 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putchar(char c);

void	ft_print_coord(int x, int y, int tab[4][4]);

void	ft_print_tab(int tab[4][4])
{
	int	x;
	int	y;

	x = 0;
	y = 0;
	while (y < 4)
	{
		x = 0;
		while (x < 4)
		{
			ft_print_coord(x, y, tab);
			if (x != 3)
				ft_putchar(' ');
			else
				ft_putchar('\n');
			x++;
		}
		y++;
	}
}
