/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:44:05 by jbiernac          #+#    #+#             */
/*   Updated: 2024/06/07 15:14:32 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*get_next_line(int fd)
{
	char	*next_line;
	int		file_exists;

	if (fd < 0)
		return (NULL);
	next_line = malloc(BUFFER_SIZE + 1);
	if (!next_line)
		return (NULL);
	file_exists = read(fd, next_line, BUFFER_SIZE);
	if (!file_exists)
		return (NULL);
	return (next_line);
}

int	main(void)
{
	int	fd;
	int	lines_to_read;
	int	read_lines;

	fd = open("lorem_ipsum.txt", O_RDONLY);
	lines_to_read = 10;
	read_lines = 0;
	while (read_lines < lines_to_read)
	{
		printf("line %i: %s", read_lines, get_next_line(fd));
		read_lines++;
	}
	return (0);
}
