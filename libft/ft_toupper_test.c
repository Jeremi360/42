#include "libft.h"
#include <stdio.h>

int	main(void)
{
	char c;

	c = 'm';
	printf("%c -> %c", c, ft_toupper(c));

	c = 'D';
	printf("\n%c -> %c", c, ft_toupper(c));

	c = '9';
	printf("\n%c -> %c", c, ft_toupper(c));
	return (0);
}