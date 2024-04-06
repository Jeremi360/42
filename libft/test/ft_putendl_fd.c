#include "../libft.h"
#include <stdio.h>

// main that tests ft_putendl_fd
int	main(void)
{
	// Test ft_putendl_fd with different strings and file descriptors
	char *str1 = "This is a test.";
	char *str2 = "Another line.";

	// Using file descriptor 1 for standard output (stdout)
	ft_putendl_fd(str1, 1);

	// Using file descriptor 2 for standard error (stderr)
	ft_putendl_fd(str2, 2);

	return (0);
}