#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char c;
	c = '5';
	printf("Result when numeric character is passed: %d", ft_isdigit(c));

	c = '+';
	printf("\nResult when non-numeric character is passed: %d", ft_isdigit(c));

	return (0);
}