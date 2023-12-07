#include <stdio.h>
#include "ex01/ft_strncpy.c"
// #include "ex01/ft_strncpy_alt.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest ft_strncpy");
	char *test_in = "zupax";
	char test_out2[3];
	ft_strncpy(test_out2, test_in, 3);
	printf("\ntest_out: \"%s\"\n", test_out2);

	char too_much[30];
	ft_strncpy(too_much, "Too Much Space 30", 30);
	printf("\ntest_out: \"%s\"\n", too_much);

	printf("\ntesting end");
	return 0;
}