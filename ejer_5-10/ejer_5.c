#include <stdio.h>

int main() {
	int a, b, c;

	printf("Escribe un primer número: ");
	scanf("%d", &a);
	printf("Escribe un segundo número: ");
	scanf("%d", &b);
	printf("Escribe un último número: ");
	scanf("%d", &c);

	if (a >= b && a >= c) {
		printf("El número %d es el mayor.\n", a);
	} else {
		if (b > c) {
			printf("El número %d es el mayor.\n", b);
		} else {
			printf("El número %d es el mayor.\n", c);
		}
	}
}
