/*Challenge 7 : Moyenne pondérée de trois nombres */
/*Écrivez un programme en C pour calculer la moyenne pondérée de trois nombres donnés par l'utilisateur avec les pondérations suivantes :*/
/*1er nombre : pondération 2*/
/*2ème nombre : pondération 3*/
/*3ème nombre : pondération 5*/
#include <stdio.h>

int main() {
    float nb1, nb2, nb3;
    float moyenne;

    printf("Entrez le premier nombre : ");
    scanf("%f", &nb1);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &nb2);

    printf("Entrez le troisième nombre : ");
    scanf("%f", &nb3);

    // Calculer la moyenne pondérée
    // (nb1 * 2 + nb2 * 3 + nb3 * 5) / (2 + 3 + 5)
    moyenne = (nb1 * 2 + nb2 * 3 + nb3 * 5) / 10;

    printf("La moyenne pondérée est : %.2f\n", moyenne);

    return 0;
}