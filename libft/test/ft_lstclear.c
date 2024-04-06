#include "../libft.h"
#include <stdio.h>

// main that tests ft_lstclear
int	main(void)
{
	t_list	*lst;

	lst = ft_lstnew("test");
	ft_lstclear(&lst, free);
	printf("ft_lstclear: OK\n");
	return (0);
}
