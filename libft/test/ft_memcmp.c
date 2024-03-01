#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*s1;
	char	*s2;
	size_t	n;

	s1 = "Hello";
	s2 = "Hello";
	n = 5;
	// printf("memcmp: %d\n", memcmp(s1, s2, n));
	printf("ft_memcmp: %d\n", ft_memcmp(s1, s2, n));
	return (0);
}
