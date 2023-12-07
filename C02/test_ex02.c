#include <stdio.h>
#include "ex02/ft_str_is_alpha.c"

int main(void)
{
	printf("testing start\n");

	printf("\ntest ft_str_is_alpha\n");
	printf("test value: \"AA\": ");
	if (ft_str_is_alpha("AA") == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value: \"bb\": ");
	if (ft_str_is_alpha("bb") == 1)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value: \"AA3\": ");
	if (ft_str_is_alpha("AA3") == 0)
	{
		printf("OK\n");
	}
	else
	{
		printf("KO\n");
	}

	printf("test value is empty string: ");
	if (ft_str_is_alpha("") == 1)
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