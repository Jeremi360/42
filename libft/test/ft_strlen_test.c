#include "../libft.h"
#include <stdio.h>

int	main(void)
{
	char a[20] = "Program";
	char b[20] = {'P', 'r', 'o', 'g', 'r', 'a', 'm', '\0'};

	// using the %zu format specifier to print size_t
	printf("Length of string a = %d \n", ft_strlen(a));
	printf("Length of string b = %d \n", ft_strlen(b));

	return (0);
}