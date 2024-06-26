/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:44:05 by jbiernac          #+#    #+#             */
/*   Updated: 2024/06/26 08:03:06 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

// To właśnie dzieje się prawdziwe gówno.
// najpierw sprawdza błędy (czy linia jest pusta, jeśli liczba pliku
// deskryptor jest nieprawidłowy lub jeśli nie przydziela sterty), aby mógł wrócić
// w razie potrzeby minus jeden (-1).
//
// jeśli jest coś w stosie (ponieważ używamy zmiennej statycznej),
// Sprawdzamy, czy istnieje nowa linia.Jeśli nie, przydzielamy pamięć dla sterty,
// i czytamy plik.
//
// Po zakończeniu odczytu pliku uwolnimy sterta (nie zamierzamy
// używaj już), a my sprawdzamy wartość RET (jeśli jest to 1 lub -1, zwrócić
// To, jeśli stos jest pusty, zwróć 0).Jeśli żaden z tych warunków nie jest
// prawidłowe, przypisujemy linię do wartości stosu, uwolnij stos i zwracamy 1
//
// Dobra lektura o deskryptorach plików:
// http://www.bottomupcs.com/file_descriptors.xhtml

int	get_next_line(int const fd, char **line)
{
	static char *stack[MAX_FD];
	char *heap;
	int ret;
	int i;
	if (!line || (fd < 0 || fd >= MAX_FD) || (read(fd, stack[fd], 0) < 0)
		|| !(heap = (char *)malloc(sizeof(char) * BUFF_SIZE + 1)))
		return (-1);
	if (stack[fd])
		if (gnl_verify_line(&stack[fd], line))
			return (1);
	i = 0;
	while (i < BUFF_SIZE)
		heap[i++] = '\0';
	ret = gnl_read_file(fd, heap, &stack[fd], line);
	free(heap);
	if (ret != 0 || stack[fd] == NULL || stack[fd][0] == '\0')
	{
		if (!ret && *line)
			*line = NULL;
		return (ret);
	}
	*line = stack[fd];
	stack[fd] = NULL;
	return (1);
}
