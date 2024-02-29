#include "../libft.h"
#include <stdio.h>

// test strrchr
int	main(void)
{
	printf("== %s ==\n", __func__);
	char *str = "Hello World!";
	char *ptr = ft_strrchr(str, 'o');
	printf("str: %s\n", str);
	printf("ptr: %s\n", ptr);
}