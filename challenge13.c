#include <stdio.h> 

int main() {
    int nombre; 
   
    printf("Entrez un nombre entier : ");
    scanf("%d", &nombre); // Lecture du nombre

    // Afficher la valeur en hexadécimal
    printf("Valeur hexadécimale : 0x%X\n", nombre);

    // Afficher la valeur en binaire
    printf("Valeur binaire : ");
    for (int i = 31; i >= 0; i--) { // Boucle pour chaque bit
        // Si le bit i est 1, afficher 1, sinon afficher 0
        if (nombre & (1 << i)) {
            printf("1");
        } else {
            printf("0");
        }
    }
    printf("\n"); // Nouvelle ligne après l'affichage

    return 0; 
}
