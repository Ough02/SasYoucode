#include <stdio.h>

int main() {
    int nombre, i;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    printf("Valeur en hexadecimal : 0x%X\n", nombre);
    printf("La valeur en binaire : ");
    for (i = 31; i >= 0; i--) {
        printf("%d", (nombre >> i) & 1);
    }

    return 0;
}
