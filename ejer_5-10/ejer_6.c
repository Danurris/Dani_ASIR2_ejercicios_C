#include <stdio.h>

int main() {
	int n;

	printf("Este programa cuenta hacia adelante.\nEscribe un número entero: ");
	scanf("%d", &n);

	for (int i = 1; i <= n; i++) {
		printf("Conteo: %d\n", i);
	}
	printf("Conteo finalizado.\n");
	return 0;
}
