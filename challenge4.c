#include <stdio.h>

int main() {
    float kmh, ms;

    printf("Entrez la vitesse en km/h: ");
    scanf("%f", &kmh);
    ms = kmh * 0.27778;

    printf("La vitesse en m/s est: %.2f\n", ms);

    return 0;
}