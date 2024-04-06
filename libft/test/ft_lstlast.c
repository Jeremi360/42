#include "../libft.h"
#include <stdio.h>

// main that tests ft_lstlast
int	main(void)
{
	t_list *list = ft_lstnew("Hello");
	ft_lstadd_back(&list, ft_lstnew("World!"));
	ft_lstadd_back(&list, ft_lstnew("How"));
	ft_lstadd_back(&list, ft_lstnew("Are"));
	ft_lstadd_back(&list, ft_lstnew("You?"));

	t_list *last = ft_lstlast(list)->content;
	printf("last: %s", (char *)last);
	// output: You?
}