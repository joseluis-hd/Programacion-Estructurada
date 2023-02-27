#include <stdio.h>
#include <stdlib.h>
#define IVA .16
#define MOTO 35
#define AUTO 38.5
#define CAMION 57
#define TON 18

/* Haro Díaz José Luis
10 de febrero de 2023
Programa que calcula el importe a pagar por un vehículo al circular por una autopista */

int main(){
    int menu;
    float importe, toneladas, tt;

    printf("\n      BIENVENIDO     \n");
    printf("\nSelecciona una opcion: ");
    scanf("%d", &menu);

    switch (menu)
    {
    case 1:
        importe = (MOTO*IVA)+MOTO;
        printf("Total a pagar por la moto: %.2f pesos", importe);
        break;
    case 2:
        importe = (AUTO*IVA)+AUTO;
        printf("Total a pagar por el auto: %.2f pesos", importe);
        break;
    case 3:
        printf("Ingrese de cuantas toneladas es el camion: ");
        scanf("%f", &toneladas);
        tt = TON*toneladas;
        importe = CAMION+tt;
        printf("Total a pagar por el camion: %.2f pesos", importe);
        break;

    default: ("ERROR");
        break;
    }
return 0;
}
Footer
© 2023 GitHub, Inc.
Footer navigation
Terms
Privacy
Security
Status
Docs
Contact GitHub
Pricing
API
Training
Blog
About
