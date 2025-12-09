#include <stdio.h>

int main() {
	char nombre[50];
	int i = 0;

	printf("Introduce un nombre: ");
	scanf("%s", nombre);

	while (nombre[i] != '\0') {
		i++;
	}
	printf("Longitud: %d\n", i);

	char p = nombre[0];
	if (p=='a'||p=='e'||p=='i'||p=='o'||p=='u'||p=='A'||p=='E'||p=='I'||p=='O'||p=='U')
		printf("Empieza con vocal\n");
	else
		printf("Empieza con consonante\n");

	if (i < 5)
		printf("Nombre corto\n");
	else if (i <= 8)
		printf("Nombre medio\n");
	else
		printf("Nombre largo\n");
}
