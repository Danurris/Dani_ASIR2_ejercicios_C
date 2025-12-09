#include <stdio.h>

int main() {
	int a, b, c;
	printf("Introduce a: ");
	scanf("%d", &a);
	printf("Introduce b: ");
	scanf("%d", &b);
	printf("Introduce c: ");
	scanf("%d", &c);

	printf("a + b * c = %d\n", a + b * c);
	printf("(a + b) * c = %d\n", (a + b) * c);
	printf("a * b %% c = %d\n", a * b % c);
	printf("(a - b) / (c + 1) = %d\n", (a - b) / (c + 1));

	int condicion = (a > b) && (b + c < a * 2);
	printf("Condicion booleana = %d\n", condicion);
}
