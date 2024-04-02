/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:52:27 by jbiernac         #+#    #+#             */
/*   Updated: 2024/03/27 17:07:44 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_word_count(char const *s, char c)
{
	size_t	i;
	size_t	count;

	i = 0;
	count = 0;
	while (s[i])
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != 0)
			count++;
		i++;
	}
	if (s[0] != c)
		count++;
	return (count);
}

char	**empty_arr(void)
{
	char	**arr;

	arr = ft_calloc(1, sizeof(char *));
	arr[0] = NULL;
	return (arr);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	size_t	word_count;
	size_t	i;
	size_t	end;
	size_t	start;

	i = 0;
	end = 0;
	if (!s || s[0] == 0)
		return (empty_arr());
	word_count = ft_word_count(s, c);
	arr = ft_calloc(word_count + 1, sizeof(char *));
	if (!arr)
		return (NULL);
	while (i < word_count)
	{
		while (s[end] == c)
			end++;
		start = end;
		while (s[end] != c && s[end])
			end++;
		arr[i++] = ft_substr(s, start, end - start);
	}
	arr[i] = NULL;
	return (arr);
}
