#include "../libft.h"
#include <stdio.h>

// main that test ft_bzero
int	main(void)
{
	char str[] = "Hello World!";
	ft_bzero(str, 5);
	printf("ft_bzero: %s\n", str);
	// should print "     World!"
	// bzero(str, 5);
	// printf("   bzero: %s\n", str);
	return (0);
}