#include "libft.h"
#include <stdio.h>

// test strlcpy
int	main(void)
{
	char	*src;
	char	dest[10];

	src = "Hello";
	ft_strlcpy(dest, src, sizeof(dest));
	printf("src: %s\n", src);
	printf("dest: %s\n", dest);
	return (0);
}
