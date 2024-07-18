/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/03/01 14:28:25 by jbiernac         #+#    #+#             */
/*   Updated: 2024/03/27 14:24:40 by jbiernac        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	size_t	len;
	char	*str;

	len = ft_strlen(s1) + 1;
	if (!s1)
		len = ft_strlen("(null)");
	str = ft_calloc(len, sizeof(char));
	if (!s1)
		str = "(null)";
	else
		ft_memcpy(str, s1, len);
	return (str);
}
