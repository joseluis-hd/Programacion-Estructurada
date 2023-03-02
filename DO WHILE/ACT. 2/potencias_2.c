#include <stdio.h>

int main(){
    int num, potencia; 

    do{
        printf("Ingrese un  numero: ");
        scanf("%d", & num);
    }
    while (num < 1 || num > 1000);
    potencia = num * num;
    printf("La segunda potencia de %d es: %d", num, potencia); 
    return 0;
}
