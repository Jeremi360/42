/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 13:52:58 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/27 14:16:24 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;
	char	*mem;
	int		i;

	if (count == 0)
		count = 1;
	if (size == 0)
		size = 1;
	if (size >= SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	mem = (char *)ptr;
	while (i < count)
	{
		mem[i] = (char)0;
		i++;
	}
	return (ptr);
}

int	find_last(const char *str, int ch)
{
	int		i;
	char	t;
	char	*temp;

	i = ft_strlen(str);
	t = (char)ch;
	temp = (char *)str;
	while (i > 0)
	{
		if (temp[i] == t)
			return (i);
		i--;
	}
	if (temp[i] == t)
		return (i);
	return (0);
}
