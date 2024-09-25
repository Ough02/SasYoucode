#include <stdio.h>
#include <math.h> // Bibliothèque daroria  pour utiliser la fonction pow()

int main() {
    float a, b, c;
    float m_g; 
    
    printf("Entrez le premier nombre : ");
    scanf("%f", &a);

    printf("Entrez le deuxième nombre : ");
    scanf("%f", &b);

    printf("Entrez le troisième nombre : ");
    scanf("%f", &c);

    // Calculer la moyenne géométrique
    // Moyenne géométrique = (a * b * c)^(1/3)
    m_g = pow((a * b * c), 1.0/3.0);
    printf("La moyenne géométrique est : %.2f\n", m_g);

    return 0; 
}