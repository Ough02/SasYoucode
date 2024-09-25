#include <stdio.h>

int main() {
    float c;

    printf("Entrez la température en Celsius: ");
    scanf("%f", &c);

    if (c < 0) {
        printf("L'état de l'eau est: Solide\n");
    } 
    else if (c >= 0 && c < 100) {
        printf("L'état de l'eau est: Liquide\n");
    } 
    else {
        printf("L'état de l'eau est: Gaz\n");
    }

    return 0;
}