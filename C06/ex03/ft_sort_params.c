/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/12 15:34:12 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/14 14:03:27 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	ft_strcmp(char *str1, char *str2)
{
	int	i;

	i = 0;
	while (str1[i] == str2[i] && str1[i] != '\0')
	{
		i++;
	}
	return (str1[i] - str2[i]);
}

int	ft_strlen(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

void	ft_putstr(char *str)
{
	int	len;

	len = ft_strlen(str);
	write(1, str, len);
}

void	ft_swapstr(char *array[], int index1, int index2)
{
	char	*temp;

	temp = array[index1];
	array[index1] = array[index2];
	array[index2] = temp;
}

int	main(int argc, char *argv[])
{
	int	i;
	int	check;

	check = 0;
	while (check == 0)
	{
		check = 1;
		i = 1;
		while (++i < argc)
		{
			if (ft_strcmp(argv[i - 1], argv[i]) > 0)
			{
				ft_swapstr(argv, i - 1, i);
				check = 0;
			}
		}
		if (check == 1)
			break ;
	}
	i = 0;
	while (++i < argc)
	{
		ft_putstr(argv[i]);
		ft_putstr("\n");
	}
	return (0);
}
