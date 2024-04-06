#include "../libft.h"
#include <stdio.h>

// main that tests ft_lstnew
int	main(void)
{
	t_list	*list;

	list = ft_lstnew("test");
	printf("%s\n", (char *)list->content);
	// Output: test
	// add another element to the list
	list->next = ft_lstnew("test2");
	printf("%s\n", (char *)list->next->content);
	// Output: test2
	return (0);
}
