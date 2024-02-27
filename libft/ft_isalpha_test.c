#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char c;
	c = 'Q';
	printf("\nResult when uppercase alphabet is passed: %d", ft_isalpha(c));

	c = 'q';
	printf("\nResult when lowercase alphabet is passed: %d", ft_isalpha(c));

	c = '+';
	printf("\nResult when non-alphabetic character is passed: %d",
		ft_isalpha(c));

	return (0);
}