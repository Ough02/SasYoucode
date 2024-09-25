#include <stdio.h>

int main() {
    float a, b;

    printf("Entrez le nombre a: ");
    scanf("%f", &a);
    printf("Entrez le nombre b: ");
    scanf("%f", &b);

    printf("a + b = %.2f\n", a + b);
    printf("a - b = %.2f\n", a - b);
    printf("a * b = %.2f\n", a * b);
    if (b != 0) {
        printf("a / b = %.2f\n", a / b);
    } else {
        printf("Division par zéro n'est pas possible.\n");
    }

    return 0;
}