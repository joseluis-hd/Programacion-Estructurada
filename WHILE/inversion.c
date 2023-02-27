#include <stdio.h>

/* Haro Diaz Jose Luis
20 de febrero de 2023
Programa que calcula los intereses generados mediante una inversión  y muestra el saldo final */


int main(){
    float inversion, tasa_interes, intereses, monto_final;

    printf("\nIngrese la cantidad a invertir: ");
    scanf("%f", &inversion);
    printf("\nIngrese la tasa de interes anual en porcentaje: ");
    scanf("%f", &tasa_interes);


    intereses = inversion * tasa_interes /100;
    printf("\nLos intereses generados son de: %0.2f pesos\n", intereses);

    monto_final = inversion + intereses;
    if (intereses > 7000)
    {
        monto_final += intereses - 7000;
        printf("\nEl saldo  final de la cuenta es de %0.2f pesos.", monto_final);
    }
    else
    {
        printf("\nEl saldo  final de la cuenta es de %0.2f pesos.", monto_final);
    }
    return 0;
}
