#include <stdio.h>

int main() {
    int nombre, reste;
    int binaire[32]; // Tableau pour stocker les bits
    int i = 0;

    // Demander à l'utilisateur d'entrer un entier
    printf("Entrez un entier: ");
    scanf("%d", &nombre);

    // Conversion en binaire
    int temp = nombre; // Sauvegarder la valeur originale
    while (temp > 0) {
        reste = temp % 2; // Récupérer le reste de la division par 2
        binaire[i] = reste; // Stocker le bit
        temp = temp / 2; // Diviser par 2
        i++;
    }

    // Afficher le résultat binaire en ordre inverse
    printf("Binaire: ");
    for (int j = i - 1; j >= 0; j--) {
        printf("%d", binaire[j]);
    }
    printf("\n");

    printf("Hexadécimal: %X\n", nombre);

    return 0;
}
