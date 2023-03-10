#include <stdio.h>

int main (){
    float peso=0, ult_peso=0, prom_peso=0;
    float acum_peso, dif_peso;
    int i;

/* Haro Diaz Jose Luis */
/* 9 de marzo de 2023 */
/* Control de peso */

    printf("Ingrese su ultimo peso: ");
    scanf("%f", &ult_peso);

    for ( i = 1; i <= 10; i++)
    {
        printf("Digite su peso: ");
        scanf("%f", &peso);
        acum_peso = acum_peso + peso;
    }

    prom_peso = acum_peso / 10;
    dif_peso = prom_peso - ult_peso;

    if (dif_peso > 0)
    {
        printf("SUBIO %.2f kilogramos", dif_peso);
    }
    else
    {
        printf("BAJO %.2f kilogramos", dif_peso);
    }
    return 0;
}
