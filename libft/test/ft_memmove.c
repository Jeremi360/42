#include "../libft.h"
#include <stdio.h>

// main that tests ft_memmove
int	main(void)
{
	char str1[50] = "Hello World!";
	char str2[50] = "Goodbye World!";
	printf("Before memmove: %s\n", str1);
	ft_memmove(str1, str2, 5);
	printf("After memmove: %s\n", str1);
	// should print: "Goodb World!"
	return (0);
}