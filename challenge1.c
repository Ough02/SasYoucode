#include <stdio.h>
#include <stdlib.h>
int main() {
    char nom[50], prenom[50], sexe[10], email[50];
    int age;

    printf("Entrez votre nom: ");
    scanf("%s", nom);
    printf("Entrez votre prenom:");
    scanf("%s", prenom);
    printf("Entrez votre âge: ");
    scanf("%d", &age);
    printf("Entrez votre sexe: ");
    scanf("%s", sexe);
    printf("Entrez votre adresse email: ");
    scanf("%s", email);
    printf(" Vos informations personnelles:\n");
    printf("Nom: %s\n", nom);
    printf("Prénom: %s\n", prenom);
    printf("Âge: %d\n", age);
    printf("Sexe: %s\n", sexe);
    printf("Email: %s\n", email);

    return 0;
}