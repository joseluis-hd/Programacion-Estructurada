#include <stdio.h>

/* Haro Diaz Jose Luis */
/* 10 de marzo de 2023 */
/* Programa que suma numeros ingresados por el usuario en los vectores A y B y muestra la suma en el vector C */

int main (){
    int A[45], B[45], C[45];
    int i;

    printf("--------------------------------\n");
    printf("          BIENVENIDO       \n");
    printf("--------------------------------\n");

    for (i = 0; i < 45; i++)
    {
        printf("Ingrese el numero %d del vector A: ",i+1);
        scanf("%d", &A[i]);
        printf("Ingrese el numero %d del vector B: ",i+1);
        scanf("%d", &B[i]);
        C[i] = A[i] + B[i];
    }

    for (i = 0; i < 45; i++)
    {
        printf("-------------------------------------------------------\n");
        printf("El resultado del vector A %d + el vector B %d es: %d \n", A[i], B[i], C[i]);
    }

    return 0; 
}
