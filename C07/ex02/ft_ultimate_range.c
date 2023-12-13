/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:38:05 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/13 17:46:58 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	*tab;
	int	i;

	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	tab = (int *)malloc(sizeof(*tab) * (max - min));
	if (tab == NULL)
		return (-1);
	i = -1;
	while (++i < max - min)
		tab[i] = min + i;
	*range = tab;
	return (i);
}
/*
int main()
{
	int *r = ft_range(0, 100);
	int len = sizeof(r) * sizeof(int) * 3;
	int i = 0;
	while (i < len)
	{
		printf("%d ", r[i]);
		i++;
	}
	
}
*/
