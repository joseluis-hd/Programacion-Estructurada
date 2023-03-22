#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[20];
    int valor=0, pos=0, i;
    for (i = 0; i < 20; i++)
    {
        printf("Ingresa el valor en la posicion [%i]", i);
        scanf("%i", &a[i]);
        if (a[i] > valor)
        {
            valor = a[i];
            pos = i;
        }
    }
    printf("El numero maximo es %i y esta en %i", valor, pos);
    return 0;
}
