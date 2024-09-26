#include <stdio.h> 

int main() {
    int nombre;
    int unite, dizaine, centaine, millier; 

    printf("Entrez un nombre entier à quatre chiffres : ");
    scanf("%d", &nombre); // Lecture du nombre
    // Extraire les chiffres du nombre
    millier = nombre / 1000;           // Obtenir le chiffre des milliers
    centaine = (nombre / 100) % 10;    // Obtenir le chiffre des centaines
    dizaine = (nombre / 10) % 10;       // Obtenir le chiffre des dizaines
    unite = nombre % 10;                // Obtenir le chiffre des unités
    printf("L'inverse du nombre est : %d%d%d%d\n", unite, dizaine, centaine, millier);

    return 0; 
}
