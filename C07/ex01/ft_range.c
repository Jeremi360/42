/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:40:59 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/13 17:41:37 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	if (min >= max)
		return (NULL);
	array = (int *)malloc(sizeof(int) * (max - min));
	i = -1;
	while (++i < max - min)
	{
		array[i] = min + i;
	}
	return (array);
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
