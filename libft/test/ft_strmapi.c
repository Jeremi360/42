#include "../libft.h"
#include <stdio.h>

// function to use with ft_strmapi
char	f(unsigned int i, char c)
{
	if (i % 2 == 0 && c >= 'a' && c <= 'z')
		return (c - 32);
	return (c);
}

// main that tests ft_strmapi
int	main(void)
{
	char *s = "Hello";
	char *res = ft_strmapi(s, f);
	printf("%s\n", res);
	// output: HeLlO
	free(res);
	return (0);
}