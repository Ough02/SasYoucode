#include <stdio.h>

int main() {
    float kilometers, yards;

    printf("Entrez la distance en kilomètres: ");
    scanf("%f", &kilometers);
    yards = kilometers * 1093.61;

    printf("La distance en yards est: %.2f\n", yards);

    return 0;
}