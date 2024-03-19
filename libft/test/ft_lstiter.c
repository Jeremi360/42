#include "../libft.h"
#include <stdio.h>

// main that tests ft_lstiter
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("test");
	ft_lstiter(lst, free);
	printf("ft_lstiter: OK\n");
	return (0);
}