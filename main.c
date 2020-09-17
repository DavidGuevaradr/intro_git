#include <stdio.h>
#include <stdlib.h>

int main()
{
    char nombre[100];

    printf("Hola Mundo \n");
    printf("Nombre: ");
    fgets(nombre, sizeof(nombre),stdin);
    printf("Hola %s", nombre);

    system("pause");

    return 0;
}
