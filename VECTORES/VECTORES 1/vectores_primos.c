#include <stdio.h>

/* Haro Diaz Jose Luis */
/* 10 de marzo de 2023 */
/* Vector con los primero 10 numeros primos */

int main(){
    int numeros_primos[10];
    int cont = 0, n = 2;

    while (cont < 10)
    {
        int es_primo = 1;
        for (int i = 2; i < n; i++)
        {
            if (n % i == 0)
            {
                es_primo = 0;
                break;
            }
        }
        if (es_primo)
        {
            numeros_primos[cont] = n;
            cont++;
        }
        n++;
    }
    printf("Los primeros 10 numeros primos son: \n");
    for (int i = 0; i < 10; i++)
    {
        printf("%d \n", numeros_primos[i]);
    }
   
    return 0;
}
