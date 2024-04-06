#include "../libft.h"
#include <stdio.h>

// main that tests ft_lstsize
int	main(void)
{
	t_list	*list;

	list = ft_lstnew("Hello");
	ft_lstadd_back(&list, ft_lstnew("World!"));
	ft_lstadd_back(&list, ft_lstnew("How"));
	ft_lstadd_back(&list, ft_lstnew("Are"));
	ft_lstadd_back(&list, ft_lstnew("You?"));
	printf("List size: %d\n", ft_lstsize(list));
}
