#include "../libft.h"
#include <stdio.h>

// #include <stdlib.h>

int	main(void)
{
	char *haystack = "Hello World";
	char *needle = "World";
	printf("ft_strnstr: %s\n", ft_strnstr(haystack, needle, 11));
	// printf("   strnstr: %d\n", strnstr(haystack, needle, 11));
	return (0);
}