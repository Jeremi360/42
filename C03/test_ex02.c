#include <stdio.h>
#include <string.h>
#include "ex02/ft_strcat.c"

// Funkcja do testowania
void test_strcat(char *dest, char *src, char *expected) {
	char result[100]; // Zakładamy maksymalny rozmiar wyniku
	strcpy(result, dest); // Inicjalizujemy wynik danym ciągiem
	ft_strcat(result, src); // Wywołujemy naszą funkcję ft_strcat

	// Wyświetlamy rezultat
	printf("Dest: '%s', Src: '%s', Result: '%s', Expected: '%s'\n", dest, src, result, expected);

	// Porównujemy wynik z oczekiwanym
	if (strcmp(result, expected) == 0) {
		printf("Test PASSED\n");
	} else {
		printf("Test FAILED\n");
	}
}

int main() {
	// Przykłady testowe
	test_strcat("Hello, ", "World!", "Hello, World!");
	test_strcat("Existing ", "Text!", "Existing Text!");
	test_strcat("Hello, ", "", "Hello, ");
	test_strcat("", "Testing!", "Testing!");
	test_strcat("Large ", "Strings!", "Large Strings!");

	return 0;
}