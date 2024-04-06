#include "../libft.h"
#include <stdio.h>

// test ft_strdup
int	main(void)
{
	char *str;

	str = ft_strdup("Hello World");
	printf("%s\n", str);
	// should print "Hello World"
	return (0);
}