#include <stdio.h>
#include "ex00/ft_putchar.c"
#include "ex01/ft_print_alphabet.c"
#include "ex02/ft_print_reverse_alphabet.c"
#include "ex03/ft_print_numbers.c"
#include "ex04/ft_is_negative.c"

int main(void)
{
	printf("testing start\n");
	
	printf("\ntest `ft_putchar('Z')`\n");
	ft_putchar('Z');
	
	printf("\ntest `ft_print_alphabet()`\n");
	ft_print_alphabet();
	
	printf("\ntest `ft_print_reverse_alphabet()`\n");
	ft_print_reverse_alphabet();
	printf("\ntest `ft_print_numbers()`\n");
	
	ft_print_numbers();
	printf("\ntest `ft_is_negative(5)`\n");
	
	ft_is_negative(5);
	printf("\ntest `ft_is_negative(-2)`\n");
	
	ft_is_negative(-2);
	printf("\ntesting end\n");
	return 0;
}