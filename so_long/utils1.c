/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils1.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: maciej <maciej@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/08/10 21:24:27 by maciej            #+#    #+#             */
/*   Updated: 2024/09/26 16:10:41 by maciej           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "solong.h"

void	safree(void *ptr)
{
	if (ptr != NULL)
	{
		free(ptr);
		ptr = NULL;
	}
}

void	*kallok(size_t count, size_t size)
{
	unsigned char	*tmp;
	size_t			i;

	i = 0;
	if (count != 0 && size != 0)
		if (count >= 4294967295 / size)
			return (NULL);
	tmp = malloc(count * size);
	if (!tmp)
		return (NULL);
	while (i < count * size)
	{
		tmp[i] = 0;
		i++;
	}
	return (tmp);
}

char	*reallok(char *ptr, size_t newsize)
{
	char	*new_ptr;

	new_ptr = kallok(newsize, sizeof(char));
	if (new_ptr && ptr)
	{
		cat(new_ptr, ptr);
		free(ptr);
	}
	return (new_ptr);
}

char	**grow_array(char **arr, size_t newsize)
{
	char	**new_arr;
	int		i;

	i = 0;
	new_arr = kallok(newsize, 8);
	if (arr && new_arr)
	{
		while (arr[i])
		{
			new_arr[i] = arr[i];
			i++;
		}
	}
	free(arr);
	return (new_arr);
}

char	*haschar(const char *s, int c)
{
	char	chara;
	char	*ptr;

	ptr = (char *)s;
	chara = (char)c;
	while (*ptr != 0 && ptr != 0)
	{
		if (*ptr == chara)
		{
			return ((char *)ptr);
		}
		ptr++;
	}
	if (chara == 0)
	{
		return ((char *)ptr);
	}
	return (NULL);
}
