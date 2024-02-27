#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char c, result;

	c = 'M';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);

	c = 'm';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);

	c = '+';
	result = ft_tolower(c);
	printf("tolower(%c) = %c\n", c, result);

	return (0);
}