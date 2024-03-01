#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char	*ptr;

	char str[] = "Hello World!";
	ptr = ft_memchr(str, 'o', 12);
	printf("%s\n", ptr);
	// Output: o World!
	return (0);
}
