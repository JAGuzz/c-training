#include <stdio.h>

int main()
{
    printf("Hola desde ANSI C con MinGW y VS Code!\n");
    

    char nombre[50];
    int edad;
    float altura;

    printf("Nombre: ");
    scanf("%s", nombre);

    //para hacer referencia a una variable(direccion de memoria) se usa & 
    printf("Edad: ");
    scanf("%d", &edad);

    printf("Altura (m): ");
    scanf("%f", &altura);

    printf("\nHola %s, tienes %d años y mides %.2f metros.\n", nombre, edad, altura);

    return 0;
}