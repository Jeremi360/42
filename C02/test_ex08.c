#include <stdio.h>
#include "ex08/ft_strlowcase.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest ft_strlowcase\n");
	char test_str2[] = "ABZ";
	printf("test value: \"%s\"\n", test_str2);
	ft_strupcase(test_str2);
	printf("finall value: \"%s\"\n", ft_strlowcase(test_str2));

	printf("\ntesting end");
	return 0;
}