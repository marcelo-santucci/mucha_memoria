/*
    Universidad Rafael Landivar
    Curso de Sistemas Operativos

    Ejemplo de un programa que solicita se le asigne toda la memoria virtual de la que el sistema operativo es capaz.
*/
#include <stdio.h>
#include <stdlib.h>

/*
(1 << 30)

Esto es una operación de desplazamiento de bits (bitwise shift):

1 en binario es: 000...0001
<< 30 significa “desplazar 30 bits a la izquierda”

Entonces:

1 << 30 = 2^30 = 1073741824
*/
#define unGb (1 << 30)

int main  () {

int contador = 0;


    while (1)
    {
        if (malloc(unGb) == NULL) {
            printf("Asignacion rechazada después de %d Gb\n",contador);
            return 0;
        }

        printf("Memoria obtenida %d Gb\n", ++contador);

    }

        
}