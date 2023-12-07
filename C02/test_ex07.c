#include <stdio.h>
#include "ex07/ft_strupcase.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest ft_strupcase\n");
	char test_str1[] = "abz";
	printf("test value: \"%s\"\n", test_str1);
	ft_strupcase(test_str1);
	printf("finall value: \"%s\"\n", ft_strupcase(test_str1));

	printf("\ntesting end");
	return 0;
}