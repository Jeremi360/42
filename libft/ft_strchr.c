/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>        +#+  +:+
	+#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/02/27 14:46:32 by jeremi360         #+#    #+#             */
/*   Updated: 2024/02/29 14:27:17 by jeremi360        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strchr(const char *str, int c)
{
	int		i;
	char	t;
	char	*temp;

	i = 0;
	t = (char)c;
	temp = (char *)str;
	while (temp[i])
	{
		if (temp[i] == t)
			return (temp + i);
		i++;
	}
	if (temp[i] == t)
		return (temp + i);
	return (0);
}
