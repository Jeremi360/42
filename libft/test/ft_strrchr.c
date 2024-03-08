#include "../libft.h"
#include <stdio.h>

// test strrchr
int	main(void)
{
	char *str = "Hello World!";
	char *ptr = ft_strrchr(str, 'o');
	printf("str: %s\n", str);
	printf("ptr: %s\n", ptr);
}