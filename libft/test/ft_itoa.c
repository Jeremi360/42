#include "../libft.h"
#include <stdio.h>

// main that tests char	*ft_itoa(int n)
int	main(void)
{
	printf("====TEST1====\n");
	printf("Expected:\n");
	printf("0\n");
	printf("Output:\n");
	printf("%s$\n", ft_itoa(0));
	printf("====TEST2====\n");
	printf("Expected:\n");
	printf("-2147483648\n");
	printf("Output:\n");
	printf("%s$\n", ft_itoa(-2147483648));
	printf("====TEST3====\n");
	printf("Expected:\n");
	printf("2147483647\n");
	printf("Output:\n");
	printf("%s$\n", ft_itoa(2147483647));
	printf("====TEST4====\n");
	printf("Expected:\n");
	printf("1234567890\n");
	printf("Output:\n");
	printf("%s$\n", ft_itoa(1234567890));
	printf("====TEST5====\n");
	printf("Expected:\n");
	printf("-1234567890\n");
	printf("Output:\n");
	printf("%s$\n", ft_itoa(-1234567890));
}