#include "../libft.h"
#include <stdio.h>

// main that test ft_atoi
int	main(void)
{
	char *str = "  -1234";
	printf("ft_atoi: %d\n", ft_atoi(str));
	// should print -1234
	// printf("   atoi: %d\n", atoi(str));
	return (0);
}