/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:46:01 by jbiernac         #+#    #+#             */
/*   Updated: 2024/03/01 16:49:57 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	to_trim(const char *set, char c)
{
	int	i;

	i = 0;
	while (set[i])
	{
		if (c == set[i])
			return (1);
		i++;
	}
	return (0);
}

char	*ft_strtrim(const char *s1, const char *set)
{
	size_t	start;
	size_t	end;
	size_t	len;
	char	*res;

	start = 0;
	end = ft_strlen(s1) - 1;
	while (to_trim(set, s1[start]) == 1)
		start++;
	while (to_trim(set, s1[end]) == 1)
		end--;
	len = end - start + 2;
	if (len <= 0 || start >= ft_strlen(s1))
		return (ft_strdup(""));
	res = ft_calloc(len, sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1 + start, len);
	return (res);
}
