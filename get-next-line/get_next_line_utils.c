/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_utils.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/18 15:13:17 by jbiernac          #+#    #+#             */
/*   Updated: 2024/06/26 08:02:35 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

static char	*ft_strdup(const char *s1)
{
	char	*s2;
	size_t	i;

	i = 0;
	while (s1[i])
		i++;
	if (!(s2 = (char *)malloc(sizeof(char) * (i + 1))))
		return (NULL);
	i--;
	while (s1[++i])
		s2[i] = s1[i];
	s2[i] = '\0';
	return (s2);
}

static char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*s3;
	char	*tmp_s3;
	size_t	i;
	size_t	j;

	j = 0;
	i = 0;
	while (s1[i])
		i++;
	while (s2[j])
		j++;
	if (!s1 || !s2 || !(s3 = (char *)malloc(sizeof(char) * (i + j + 1))))
		return (NULL);
	tmp_s3 = s3;
	while (*s1 != '\0')
		*tmp_s3++ = *s1++;
	while (*s2 != '\0')
		*tmp_s3++ = *s2++;
	*tmp_s3 = '\0';
	return (s3);
}

// Sprawdź, czy cokolwiek jest w stosie, ma nową linię.Jeśli nie, zwraca
// zero (0), aby wskazać, że jest to nieprawidłowe.Jeśli jest nowa linia, tworzymy
// kopia stosu w linii i skopiowaliśmy wszystko, co było na stosie
// Wcześniej, wróć do stosu (z tymczasowym stosem, który stworzyliśmy).

static int	gnl_verify_line(char **stack, char **line)
{
	char	*tmp_stack;
	char	*strchr_stack;
	int		i;

	i = 0;
	strchr_stack = *stack;
	while (strchr_stack[i] != '\n')
		if (!strchr_stack[i++])
			return (0);
	tmp_stack = &strchr_stack[i];
	*tmp_stack = '\0';
	*line = ft_strdup(*stack);
	*stack = ft_strdup(tmp_stack + 1);
	return (1);
}

// odczytuje w stosie, z deskryptorów plików, określoną liczbę bajtów
// zdefiniowane przez makro Buff_Size w pliku get_nex_line.h.Będzie
// Kontynuuj odczyt, gdy wartość zwracania funkcji odczytu jest większa
// niż zero (bez błędów lub jeśli nie ma nic więcej do odczytania).
// Jeśli jest coś w stosie, będziemy się połączyć wszystko
// tam, z tym, co jest odczytane na stosie.Jeśli nie, po prostu dodamy
// Cokolwiek znajduje się na stosie.Następnie zweryfikujemy stos do
// Sprawdź, czy istnieje nowa linia.Jeśli tak, zerwamy z pętli When
// i wymuszaj dodatnią wartość RET do jednego (1) za pomocą makra ret_value ().
// Ten formularz odpowiedzi pomógł mi w lepszym wizualizacji stosu i sterty:
// http://stackoverflow.com/a/1213360

static int	gnl_read_file(int fd, char *heap, char **stack, char **line)
{
	int		ret;
	char	*tmp_stack;

	while ((ret = read(fd, heap, BUFF_SIZE)) > 0)
	{
		heap[ret] = '\0';
		if (*stack)
		{
			tmp_stack = *stack;
			*stack = ft_strjoin(tmp_stack, heap);
			free(tmp_stack);
			tmp_stack = NULL;
		}
		else
			*stack = ft_strdup(heap);
		if (gnl_verify_line(stack, line))
			break ;
	}
	return (RET_VALUE(ret));
}
