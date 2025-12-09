#include <stdio.h>

int main() {
	int entero;
	float decimal;
	char letra;

	printf("Introduce un entero: ");
	scanf("%d", &entero);

	printf("Introduce un decimal: ");
	scanf("%f", &decimal);

	printf("Introduce una letra: ");
	scanf(" %c", &letra);

	if (entero % 2 == 0)
		printf("El entero es par\n");
	else
		printf("El entero es impar\n");

	float truncado = (int)(decimal * 100) / 100.0;
	if (truncado != decimal)
		printf("Tiene mas de 2 decimales\n");
	else
		printf("Tiene 2 o menos decimales\n");

	if (letra >= 'A' && letra <= 'Z')
		printf("La letra es mayuscula\n");
	else if (letra >= 'a' && letra <= 'z')
		printf("La letra es minuscula\n");
	else
		printf("No es una letra\n");
}
