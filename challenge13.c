#include <stdio.h>

int main() {
    int nombre, i,bin;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);
    printf("Valeur en hexadecimal : 0x%X\n", nombre);
    printf("La valeur en binaire : ");
  while (nombre != 0)
{
  bin = nombre % 2;
  nombre = nombre / 2;
  printf("%d",bin);

}
    return 0;
}
