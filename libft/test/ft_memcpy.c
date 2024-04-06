#include "../libft.h"
#include <stdio.h>

// main that tests ft_memcpy
int	main(void)
{
	char str1[50] = "Hello World!";
	char str2[50] = "Goodbye World!";
	printf("Before memcpy: %s\n", str1);
	ft_memcpy(str1, str2, 5);
	printf("After memcpy: %s\n", str1);
	// should print: "Goodbye World!"
	return (0);
}