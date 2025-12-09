#include <stdio.h>

int main() {
    float n;

    printf("Introduce un n° decimal: ");
    scanf("%f", &n);

    if (n >= 0 && n <= 10) {
        printf("El número %.2f está entre 0 y 10.\n", n);
    } else if (n > 10) {
        printf("El número %.2f es mayor que 10.\n", n);
    } else {
        printf("El número %.2f es menor que 0.\n", n);
    }

    float truncado = (int)(n * 100) / 100.0;
    if (truncado != n)
        printf("Tiene mas de 2 decimales.\n");
    return 0;
}
