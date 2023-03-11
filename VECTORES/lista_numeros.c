#include <stdio.h>

/* Haro Diaz Jose Luis */
/* 10 de marzo de 2023 */
/* Suma y maximo de 10 numeros ingresados */

int main (){
    int numeros[10];
    int i, suma = 0, maximo;

    printf("--------------------------------\n");
    printf("          BIENVENIDO       \n");
    printf("--------------------------------\n");

    for (i = 0; i < 10; i++)
    {
        printf("Introduce el numero %d: ", i+1);
        scanf("%d", &numeros[i]);
    }
    
    for (i = 0; i < 10; i++)
    {
        suma += numeros[i];
    }

    maximo = numeros[0];
    for (i = 0; i < 10; i++)
    {
        if (numeros[i] > maximo)
        {
            maximo = numeros[i];
        }
    }
    
    printf("La suma de los numeros ingresados es: %d \n", suma);
    printf("El numero maximo es: %d \n", maximo);
    
    return 0;
}
