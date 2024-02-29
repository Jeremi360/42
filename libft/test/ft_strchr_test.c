#include "libft.h"
#include <stdio.h>

// test ft_strchr
int	main(void)
{
	char	*str;
	char	c;
	char	*ptr;

	str = "Hello World!";
	c = 'o';
	ptr = ft_strchr(str, c);
	printf("String after |%c| is - |%s|\n", c, ptr);
	return (0);
}
