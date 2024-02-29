#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char c;
	int result;

	c = '5';
	result = ft_isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result);

	c = 'Q';
	result = ft_isalnum(c);
	printf("When %c is passed, return (value is %d)\n", c, result);

	c = 'l';
	result = ft_isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result);

	c = '+';
	result = ft_isalnum(c);
	printf("When %c is passed, return (value is %d\n", c, result);

	return (0);
}