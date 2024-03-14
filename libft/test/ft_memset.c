#include "../libft.h"
#include <stdio.h>

// main that tests ft_memset
int	main(void)
{
	char str[50] = "Hello World!";
	printf("Before memset: %s\n", str);
	ft_memset(str, 'a', 7);
	printf("After memset: %s\n", str);
	// should print: "aaaaa World!"
	return (0);
}