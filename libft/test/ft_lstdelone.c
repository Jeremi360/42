#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	ft_lstdelone(ft_lstnew("test"), free);
	printf("ft_lstdelone: OK\n");
	return (0);
}