#include "../libft.h"
#include <stdio.h>

// test ft_calloc
int	main(void)
{
	char *ptr;
	int i;

	i = 0;
	ptr = (char *)ft_calloc(5, sizeof(char));
	while (i < 5)
	{
		printf("%c;%d", ptr[i], i);
		i++;
	}
	printf("\n");
	return (0);
}