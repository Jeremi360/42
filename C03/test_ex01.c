#include <stdio.h>
#include "ex01/ft_strncmp.c"

int main(void)
{
	printf("testing start\n");
	
	printf("\ntest `ft_strncmp");
	printf("\ntest \"xax\" and \"xay\", but compering only 2 first: ");
	int test = ft_strncmp("xx", "xx", 2);
	if (test == 0)
	{
		printf("OK: %d", test);
	}
	else
	{
		printf("KO: %d", test);
	}

	printf("\ntest \"xax\" and \"xax\", but compering all 3: ");
	test = ft_strncmp("xax", "xay", 3);
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