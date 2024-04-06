#include "../libft.h"
#include <stdio.h>

// function to use with ft_striteri
void	f(unsigned int i, char *c)
{
	if (i % 2 == 0 && *c >= 'a' && *c <= 'z')
		*c = *c - 32;
}

// main that tests ft_striteri
int	main(void)
{
	char *s = "Hello";
	ft_striteri(s, f);
	printf("%s\n", s);
	// output: HeLlO
	return (0);
}