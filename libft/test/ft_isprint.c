#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	int c;
	for (c = 1; c <= 127; ++c)
		if (ft_isprint(c) != 0)
			printf("%c ", c);
	return (0);
}