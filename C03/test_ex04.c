#include <stdio.h>
#include "ex04/ft_strstr.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest `ft_strstr`: ");
	char *test_str = "Hello, World!";
	char *to_find = "World";

	char *result = ft_strstr(test_str, to_find);

	if (result != NULL)
	{
		printf("OK, %s\n", result);
	}
	else
	{
		printf("KO");
	}

	printf("\ntesting end\n");
	return 0;
}