#include "../libft.h"
#include <stdio.h>

// main that tests ft_lstadd_front
int	main(void)
{
	t_list *list;

	list = ft_lstnew("test");
	ft_lstadd_front(&list, ft_lstnew("test2"));
	printf("%s\n", (char *)list->content);
	// Output: test2
	printf("%s\n", (char *)list->next->content);
	// Output: test
	return (0);
}