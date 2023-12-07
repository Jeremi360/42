#include <stdio.h>
#include "ex05/ft_strlcat.c"

int main() {
	char dest[20] = "Hello, ";
	char src[] = "World!";
	unsigned int result = ft_strlcat(dest, src, 3);
	printf("Po konkatenacji: %s\n", dest);
	printf("Sumaryczna długość: %u\n", result);
	return 0;
}