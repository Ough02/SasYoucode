#include <stdio.h>
#include <math.h> /

int main() {
    float x1, y1, z1; // Coordonnées du premier point
    float x2, y2, z2; // Coordonnées du deuxième point
    float distance;   

    printf("Entrez les coordonnées du premier point (x1, y1, z1) :\n");
    scanf("%f %f %f", &x1, &y1, &z1);

    printf("Entrez les coordonnées du deuxième point (x2, y2, z2) :\n");
    scanf("%f %f %f", &x2, &y2, &z2);

    // Calculer la distance entre les deux points en utilisant la formule
    // Distance = √((x2 - x1)² + (y2 - y1)² + (z2 - z1)²)
    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2) + pow(z2 - z1, 2));
    printf("La distance entre les deux points est : %.2f\n", distance);
    
    return 0;
}