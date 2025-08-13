#include <stdio.h>

int main() {
    char nombre[50];
    int edad;

    printf("Introduce tu nombre: ");
    scanf("%49s", nombre);  // Lee una palabra (sin espacios)

    printf("Introduce tu edad: ");
    scanf("%d", &edad);     // Lee un entero

    printf("Hola %s, tienes %d años.\n", nombre, edad);

    return 0;
}