#include "../libft.h"
#include <stdio.h>

// test ft_strtrim main
int	main(void)
{
	char *s1;
	char *set;
	char *s2;

	s1 = "  Hello World  ";
	set = " ";
	s2 = ft_strtrim(s1, set);
	printf("\"%s\"\n", s2);
	return (0);
}