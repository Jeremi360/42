/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils2.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiernac <mbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/26 15:31:19 by maciej            #+#    #+#             */
/*   Updated: 2024/09/27 20:19:17 by mbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

size_t	length(char const *str)
{
	size_t	i;

	if (!str)
		return (0);
	i = 0;
	while (str[i] && str[i] != '\n')
		i++;
	return (i);
}

void	cat(char *dst, const char *src)
{
	size_t	a;
	size_t	b;

	if (!dst || !src)
		return ;
	a = length(dst);
	b = 0;
	while (src[b])
	{
		dst[a] = src[b];
		a++;
		b++;
	}
	dst[a] = 0;
}

int	my_strncmp(const char *s1, const char *s2, size_t limiter)
{
	size_t	i;

	i = 0;
	while ((s1[i] || s2[i]) && i < limiter)
	{
		if ((unsigned char) s1[i] != (unsigned char) s2[i])
		{
			return ((unsigned char) s1[i] - (unsigned char) s2[i]);
		}
		i++;
	}
	return (0);
}

char	*strdupa(const char *s1)
{
	char	*buff;

	buff = kallok(sizeof(char), length(s1) + 2);
	cat(buff, s1);
	return (buff);
}

size_t	yclamp(size_t ycheck)
{
	size_t	almostmax;

	almostmax = (size_t)-2;
	if (ycheck > almostmax)
	{
		ycheck = 0;
	}
	return (ycheck);
}
