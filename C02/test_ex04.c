#include <stdio.h>
#include "ex04/ft_str_is_lowercase.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest ft_str_is_lowercase\n");
	printf("test value: \"AA\": ");
	if (ft_str_is_lowercase("AA") == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value: \"bb\": ");
	if (ft_str_is_lowercase("bb") == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value: \"aa3\": ");
	if (ft_str_is_lowercase("aa3") == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value is empty string: ");
	if (ft_str_is_lowercase("") == 1)
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