#include <stdio.h>
#include <math.h> //  pour utiliser pow()

#define PI 3.14 // Déclaration de la constante PI

int main() {
    float rayon;  // Variable pour stocker le rayon de la sphère
    float volume; // Variable pour stocker le volume de la sphère

    printf("Entrez le rayon de la sphère : ");
    scanf("%f", &rayon);

    // Calculer le volume de la sphère avec la formule
    // Volume = (4/3) * PI * r³
    volume = (4.0 / 3.0) * PI * pow(rayon, 3);
    printf("Le volume de la sphère est : %.2f\n", volume);
    return 0; 
}