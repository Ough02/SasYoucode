#include <stdio.h>

int main() {
    float celsius, kelvin;

    printf("Entrez la temperature en Celsius: ");
    scanf("%f", &celsius);
    kelvin = celsius + 273.15;

    printf("La temperature en Kelvin est: %.2f\n", kelvin);

    return 0;
}