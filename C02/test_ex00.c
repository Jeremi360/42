#include <stdio.h>
#include "ex00/ft_strcpy.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest ft_strcpy");
	char *test_in = "zupax";
	char test_out[10];
	ft_strcpy(test_out, test_in);
	printf("\ntest_out: \"%s\"\n", test_out);

	printf("\ntesting end");
	return 0;
}