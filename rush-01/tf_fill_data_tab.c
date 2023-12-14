/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   tf_fill_data_tab.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/03 14:19:00 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/03 14:19:03 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_fill_data_tab(int input_tab[4][4], char input[])
{
	int	i;
	int	j;
	int	k;

	i = 0;
	j = 0;
	k = 0;
	while (j < 4)
	{
		i = 0;
		while (i < 4)
		{
			input_tab[j][i] = input[k] - 48;
			k += 2;
			i++;
		}
		j++;
	}
}