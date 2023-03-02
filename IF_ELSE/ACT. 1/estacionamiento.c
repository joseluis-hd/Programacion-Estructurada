#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Haro Diaz Jose Luis
3 de febrero de 2023
Programa de estacionamiento que calcula el  tiempo de estadia, monto a pagar, si este ya se cubrio, cuanto falta y el cambio a dar */

int main(){
    int he, ht, m, mt, costo, total, dinero, mf, mf2, cambio;

    printf("--------------------------------\n");
    printf("BIENVENIDO AL ESTACIONAMIENTO\n");
    printf("--------------------------------\n");
    printf("\nIngrese horas de estancia: ");
    scanf("%d", &he);
    printf("\n--------------------------------\n");

    costo = 10;
    total = costo * he;
    printf("\nSu total a pagar es de: %d pesos.\n", total);

    printf("\n--------------------------------\n");

    printf("\nPor favor ingrese el dinero: ");
    scanf("%d", &dinero);
    printf("\nUsted ingreso: %d pesos.\n", dinero);

    if (dinero < total)
    {
        mf =  total - dinero;
        printf("\nMonto faltante: %d pesos.\n", mf);
        printf("\nIngrese el monto faltante exacto: ");
        scanf("%d", &mf2);
    }
    if (dinero > total)
    {
        cambio = dinero - total;
    printf("\nSu cambio es de %d pesos\n", cambio);
    }
    else
    {
        printf("\nMonto total pagado\n");
    }

    printf("\nGracias, vuelva pronto :)\n");
    printf("\n--------------------------------\n");
    return 0;
}
