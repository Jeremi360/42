/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 16:08:47 by jbiernac         #+#    #+#             */
/*   Updated: 2024/03/06 14:12:55 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(const char *s1, const char *s2)
{
	char	*res;
	size_t	s1_len;
	size_t	s2_len;
	size_t	size;

	if (!s1 || !s2)
	{
		return (ft_strdup(""));
	}
	s1_len = ft_strlen(s1);
	s2_len = ft_strlen(s2);
	size = s1_len + s2_len + 1;
	res = ft_calloc(size, sizeof(char));
	if (!res)
		return (NULL);
	ft_strlcpy(res, s1, size);
	ft_strlcat(res, s2, size);
	res[size] = 0;
	return (res);
}
