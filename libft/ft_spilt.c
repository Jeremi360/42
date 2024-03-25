/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_spilt.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jeremi360 <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:52:27 by jeremi360         #+#    #+#             */
/*   Updated: 2024/03/25 17:35:33 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	count_words(char const *str, char split)
{
	int	i;
	int	count;

	i = ft_strlen(str);
	count = 0;
	while (i-- > 0)
	{
		while (str[i] == split)
			i--;
		count++;
	}
	return (count);
}

char	**ft_split(char const *str, char split)
{
	char	**arr;
	int		words;
	int		end;
	int		start;
	int		i;

	i = 0;
	end = ft_strlen(str);
	start = 0;
	words = count_words(str, split);
	printf("words: %d\n", words);
	if (words == 0)
		return (NULL);
	arr = ft_calloc(words, sizeof(char *));
	while (i < words)
	{
		while (str[end] != split)
			end--;
		arr[i] = ft_substr(str, start, end);
		printf("word: %s, start: %d, end: %d\n", arr[i], start, end);
		start = end + 1;
		i++;
	}
	return (arr);
}

// int	main(void)
// {
// 	char	*str;
// 	char	**arr;
// 	int		i;

// 	str = "      split       this for   me  !       ";
// 	arr = ft_split(str, ' ');
// 	return (0);
// }
