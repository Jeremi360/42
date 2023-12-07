#include <stdio.h>
#include "ex00/ft_strcmp.c"

int main(void)
{
	printf("testing start\n");
	
	printf("\ntest `ft_strcmp");
	printf("\ntest \"xa\" and \"xa\": ");
	int test = ft_strcmp("xa", "xa");
	if (ft_strcmp("xa", "xa") == 0)
	{
		printf("OK: %d", test);
	}
	else
	{
		printf("KO: %d", test);
	}

	printf("\ntest \"xa\" and \"ya\": ");
	test = ft_strcmp("xa", "ya");
	if (test != 0)
	{
		printf("OK: %d", test);
	}
	else
	{
		printf("KO: %d", test);
	}

	printf("\n\ntesting end\n");
	return 0;
}