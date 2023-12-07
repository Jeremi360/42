#include <stdio.h>
#include "ex00/ft_ft.c"
#include "ex01/ft_ultimate_ft.c"
// #include "ex02/ft_swap.c"
#include "ex03/ft_div_mod.c"
#include "ex04/ft_ultimate_div_mod.c"
#include "ex05/ft_putstr.c"
#include "ex06/ft_strlen.c"

#include "ex07/ft_rev_int_tab.c"
// to fix
// #include "ex08/ft_sort_int_tab.c"

int main(void)
{
	printf("testing start\n");
	
	printf("\ntest `ft_ft`\n");
	int x = 4;
	ft_ft(&x);
	printf("now x = %d\n", x);

	printf("\ntest `ft_ultimate_ft`\n");
	int point0 = 0;
	int *point1 = &point0;
	int **point2 = &point1;
	int ***point3 = &point2;
	int ****point4 = &point3;
	int *****point5 = &point4;
	int ******point6 = &point5;
	int *******point7 = &point6;
	int ********point8 = &point7;

	ft_ultimate_ft(&point8);
	printf("now point0 = %d\n", point0);

	printf("\ntest `ft_ultimate_div_mod`\n");
	int z = 3;
	int q = 7;
	ft_swap(&z, &q);
	printf("now z = %d\n", z);
	printf("now q = %d\n", q);

	printf("\ntest `ft_div_mod`\n");
	int e = 12;
	int r = 2;
	int div = 0;
	int mod = 0;
	ft_div_mod(e, r, &div, &mod);
	printf("now div = %d\n", div);
	printf("now mod = %d\n", mod);

	printf("\ntest `ft_ultimate_div_mod`\n");
	int ue = 12;
	int ur = 2;
	ft_ultimate_div_mod(&ue, &ur);
	printf("now ue = %d\n", ue);
	printf("now ur = %d\n", ur);

	printf("\ntest `ft_putstr`\n");
	char *zupa = "Zupa";
	printf("test is %s\n", zupa);
	ft_putstr(zupa);

	printf("\n\ntest `ft_strlen`\n");
	printf("test is \"%s\"\n", zupa);
	int strlen = ft_strlen(zupa);
	printf("\"%s\" size is %d", zupa, strlen);

	printf("\n\ntest `ft_rev_int_tab`\n");
	int list[] = {4, 5, 6};
	ft_rev_int_tab(list, 3);
	int i = 0;
	while(i < 3)
	{
		printf("now %d in tab is %d\n", i, list[i]);
		i++;
	}

	// to fix
	// printf("\n\ntest `ft_sort_int_tab`\n");
	// ft_sort_int_tab(list, 3);
	// int j = 0;
	// while (i < 3)
	// {
	// 	printf("now %d in tab is %d\n", j, list[j]);
	// 	j++;
	// }

	printf("\ntesting end\n");
	return 0;
}