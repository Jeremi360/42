#include "../libft.h"
#include <stdio.h>

// test ft_strjoin main
int	main(void)
{
	char	*s1;
	char	*s2;
	char	*s3;

	s1 = "Hello";
	s2 = "World";
	s3 = ft_strjoin(s1, s2);
	printf("%s\n", s3);
	return (0);
}
