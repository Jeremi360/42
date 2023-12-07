#include <stdio.h>
#include "ex03/ft_str_is_numeric.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest ft_str_is_numeric\n");
	printf("test value: \"33\": ");
	if (ft_str_is_numeric("33") == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value: \"bb\": ");
	if (ft_str_is_numeric("bb") == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value is empty string: ");
	if (ft_str_is_numeric("") == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("\ntesting end");
	return 0;
}