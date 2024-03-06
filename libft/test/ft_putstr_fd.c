#include "../libft.h"
#include <stdio.h>

// main that tests ft_putstr_fd
int	main(void)
{
	char *str = "Hello, World!";
	ft_putstr_fd(str, 1);
	return (0);
}