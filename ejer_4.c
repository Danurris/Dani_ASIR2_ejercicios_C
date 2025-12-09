#include <stdio.h>

int main() {
	int x;
	float y;
	double z;

	printf("Introduce un int: ");
	scanf("%d", &x);

	printf("Introduce un float: ");
	scanf("%f", &y);

	printf("Introduce un double: ");
	scanf("%lf", &z);

	printf("Suma total: %.2lf\n", x + y + z);
	printf("Division double/float: %.2lf\n", z / y);

	int convertido = (int)y;
	printf("Float = %.2f, Como entero = %d\n", y, convertido);

	int comp = (x + y) > z;
	printf("Resultado booleano: %d\n", comp);
}
