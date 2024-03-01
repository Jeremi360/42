#include "../libft.h"
#include <stdio.h>

// main test ft_substr
int	main(void)
{
	char const *s = "Hello World!";
	unsigned int start = 6;
	size_t len = 5;
	printf("s: %s\n", s);
	printf("start: %d\n", start);
	printf("len: %ld\n", len);
	printf("ft_substr: %s\n", ft_substr(s, start, len));
}