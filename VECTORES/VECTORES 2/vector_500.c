#include <stdio.h>
#include <stdlib.h>

int main(){
    int a[500], b[500], i;

    for (i = 0; i < 500; i++)
    {
        a[i] = rand() %  31;
        b[i] = a[i] * a[i];
    }
    for (i = 0; i < 500; i++)
    {
        printf("El vector elevado en [%i] es: %d \n", i, a[i]);
    }
    
    for (i = 0; i < 500; i++)
    {
        printf("El vector elevado en [%i] es: %d \n", i, b[i]);
    }
    return 0;
}
