/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jeremi360@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 13:23:05 by jeremi360         #+#    #+#             */
/*   Updated: 2024/02/29 14:51:56 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char const *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}