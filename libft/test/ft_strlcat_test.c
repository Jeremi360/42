#include "libft.h"
#include <stdio.h>

// test ft_strlcat
int	main(void)
{
	char *src;
	char dest[10];

	src = "Hello";
	ft_strlcat(dest, src, sizeof(dest));
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}