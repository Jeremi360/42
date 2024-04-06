#include "../libft.h"
#include <stdio.h>

// main that tests ft_lstmap
int	main(void)
{
	t_list	*lst;
	t_list	*new;

	lst = ft_lstnew("test");
	new = ft_lstmap(lst, ft_strdup, free);
	if (new && new->content && !strcmp(new->content, "test"))
		printf("ft_lstmap: OK\n");
	else
		printf("ft_lstmap: Error\n");
	return (0);
}