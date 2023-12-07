#include <stdio.h>
#include <string.h>
#include "ex03/ft_strncat.c"

void test_strncat(char *dest, char *src, unsigned int nb, char *expected)
{
	char result[100]; // Zakładamy maksymalny rozmiar wyniku
	strcpy(result, dest); // Inicjalizujemy wynik danym ciągiem
	ft_strncat(result, src, nb); // Wywołujemy naszą funkcję ft_strncat

	// Wyświetlamy rezultat
	printf("Dest: '%s', Src: '%s', Result: '%s', Expected: '%s'\n", dest, src, result, expected);

	// Porównujemy wynik z oczekiwanym
	if (strcmp(result, expected) == 0)
	{
		printf("Test PASSED\n");
	}
	else
	{
		printf("Test FAILED\n");
	}
}

int main() {
	// Przykłady testowe
	test_strncat("Hello, ", "World!", 5, "Hello, World");
	test_strncat("Existing ", "Text!", 4, "Existing Text");
	test_strncat("Hello, ", "", 3, "Hello, ");
	test_strncat("", "Testing!", 7, "Testing");
	test_strncat("Large ", "Strings!", 7, "Large Strings");

	return 0;
}