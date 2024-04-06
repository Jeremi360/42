#include "../libft.h"
#include <stdio.h>

// test ft_strncmp
int	main(void)
{
	char *s1;
	char *s2;
	int n;

	s1 = "Hello";
	s2 = "Hello";
	n = 5;
	printf("s1: %s\n", s1);
	printf("s2: %s\n", s2);
	printf("n: %d\n", n);
	printf("ft_strncmp: %d\n", ft_strncmp(s1, s2, n));
	// result should be 0
}