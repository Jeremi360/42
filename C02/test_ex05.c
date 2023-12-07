#include <stdio.h>
#include "ex05/ft_str_is_uppercase.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest ft_str_is_uppercase\n");
	printf("test value: \"AA\": ");
	if (ft_str_is_uppercase("AA") == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value: \"bb\": ");
	if (ft_str_is_uppercase("bb") == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value: \"aa3\": ");
	if (ft_str_is_uppercase("aa3") == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value is empty string: ");
	if (ft_str_is_uppercase("") == 1)
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