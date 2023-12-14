/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 17:38:12 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/14 12:22:58 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>
#include <stdio.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

char	*str_cat(char *dest, char *src)
{
	int	i;
	int	x;

	i = 0;
	x = str_len(dest);
	while (src[i] != '\0')
	{
		dest[x + i] = src[i];
		i++;
	}
	dest[x + i] = '\0';
	return (dest);
}

char	*str_cpy(char *dest, char *src)
{
	int	size;

	size = -1;
	while (src[++size] != '\0')
	{
		dest[size] = src[size];
	}
	dest[size] = '\0';
	return (dest);
}

char	*ft_strjoin(int size, char *str_arr[], char *sep)
{
	int		i;
	int		total_size;
	char	*str;

	i = -1;
	total_size = 0;
	while (++i < size)
	{
		total_size += str_len(str_arr[i]);
		if (i < size - 1)
			total_size += str_len(sep);
	}
	str = (char *)malloc(sizeof(char) * (total_size + 1));
	i = -1;
	str[0] = '\0';
	while (++i < size)
	{
		str = str_cat(str, str_arr[i]);
		if (i < size - 1)
			str = str_cat(str, sep);
	}
	str[total_size] = '\0';
	return (str);
}
/*
int main()
{
	char *h42[] = {"Hello", "42"};
	printf("%s\n", ft_strjoin(2, h42, " "));
	printf("%s\n", ft_strjoin(2, h42, " | "));
	char *path[] = {"/path", "to", "some", "file.c"};
	printf("%s\n", ft_strjoin(4, path, "/"));
}
*/

