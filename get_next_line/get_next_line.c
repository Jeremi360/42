/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/27 14:09:49 by jbiernac          #+#    #+#             */
/*   Updated: 2024/05/27 14:23:20 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*return_buff_clean(char *buffer, char *buf)
{
	return (buffer, ft_strjoin(buffer, buf));
}

char	*return_buff(char *buffer, char *returned_thing)
{
	free(buffer);
	return (returned_thing);
}

char	*ft_next(char *buffer)
{
	int		n;
	int		j;
	char	*line;

	n = find_last(buffer, '\n');
	if (!n)
		return (return_buff(buffer, NULL));
	line = ft_calloc((ft_strlen(buffer) - n + 1), sizeof(char));
	i++;
	j = 0;
	while (buffer[i])
		line[j++] = buffer[i++];
	return (return_buff(buffer, line));
}

char	*ft_line(char *buffer)
{
	char	*line;
	int		i;

	i = 0;
	if (!buffer[i])
		return (NULL);
	while (buffer[i] && buffer[i] != '\n')
		i++;
	line = ft_calloc(i + 2, sizeof(char));
	i = 0;
	while (buffer[i] && buffer[i] != '\n')
	{
		line[i] = buffer[i];
		i++;
	}
	if (buffer[i] && buffer[i] == '\n')
		line[i++] = '\n';
	return (line);
}

char	*read_file(int fd, char *res)
{
	char	*buffer;
	int		byte_read;

	if (!res)
		res = ft_calloc(1, 1);
	buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	byte_read = 1;
	while (byte_read > 0)
	{
		byte_read = read(fd, buffer, BUFFER_SIZE);
		if (byte_read == -1)
			return (return_buff(buffer, NULL));
		buffer[byte_read] = 0;
		res = return_buff_clean(res, buffer);
		if (find_last(buffer, '\n'))
			break ;
	}
	return (return_buff(buffer, res));
}

char	*get_next_line(int fd)
{
	static char *buffer[OPEN_MAX];
	char *line;

	if (fd < 0 || BUFFER_SIZE <= 0 || read(fd, 0, 0) < 0)
		return (NULL);
	buffer[fd] = read_file(fd, buffer[fd]);
	if (!buffer[fd])
		return (NULL);
	line = ft_line(buffer[fd]);
	buffer[fd] = ft_next(buffer[fd]);
	return (line);
}