/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jbiernac <jbiernac@student.42warsaw.pl>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/07 14:45:43 by jbiernac          #+#    #+#             */
/*   Updated: 2024/06/24 14:21:27 by jbiernac         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

// Needed for malloc(), free() and write().
// Also for typedef size_t and sizeof()

# include <stdlib.h>
# include <unistd.h>

// Macro for the buffer size, the max number of file descriptors available, and
// to get the correct return value from the gnl_read_file() function.
// Find the max number of files:
// Linux: ulimit -n

# define BUFF_SIZE 8
# define MAX_FD 1024 + 1
# define RET_VALUE(ret) ret > 0 ? 1 : ret

// Prototype for the get_next_line() function.
int	get_next_line(int const fd, char **line);

#endif