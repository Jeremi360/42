/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check_args.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/04 13:00:34 by jbiernac          #+#    #+#             */
/*   Updated: 2024/10/04 13:00:36 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../../includes/push_swap.h"

// function which checks the character if it is alphanumerical
int	ft_isalpha(int c)
{
	if ((c >= 58 && c <= 126) || (c >= 33 && c <= 42) || (c == 44) || (c == 46)
		|| (c == 47))
		return (1);
	return (0);
}

// Here arguments are send to make ASCII check
// regarding the alphanumeric values
void	alpha_check(char **argv)
{
	int	i;
	int	j;

	i = 1;
	while (argv[i])
	{
		j = 0;
		while ((argv[i][j]) != '\0')
		{
			if (ft_isalpha(argv[i][j]))
				ft_error();
			j++;
		}
		i++;
	}
}

// With this function it is checked
// whether arguments include alfanumeric or not
int	check_args(char **argv)
{
	alpha_check(argv);
	if (!check_error(argv, 1, 0))
		return (false);
	return (true);
}
