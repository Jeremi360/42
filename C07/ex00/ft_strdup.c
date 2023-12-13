/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/13 16:00:53 by jbiernac          #+#    #+#             */
/*   Updated: 2023/12/13 17:32:23 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	str_len(char *str)
{
	int	len;

	len = 0;
	while (str[len] != '\0')
		len++;
	return (len);
}

char	*str_cpy(char *dest, char *src)
{
	int	i;

	i = 0;
	while (i < str_len(src))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (dest);
}

char	*ft_strdup(char *src)
{
	char	*dest;

	dest = (char *)malloc(sizeof(char) * str_len(src));
	if (dest == NULL)
		return (NULL);
	return (str_cpy(dest, src));
}
/*
#include <stdio.h>
int main()
{
	char *test0 = "gfghjk!";
	char *test1 = "xyXyYx";
	char *test2 = "mulinet!";

	char *result0 = ft_strdup(test0);
	char *result1 = ft_strdup(test1);
	char *result2 = ft_strdup(test2);

	printf("%s\n", result0);
	printf("%s\n", result1);
	printf("%s\n", result2);
}
*/