#include <stdio.h>
#include <stdlib.h>

/* Haro Diaz Jose Luis
20 de febrero de 2023
Programa que calcula el salario de un trabajador conforme a sus horas trabajadas al dia, tarifa por hora y dias laborados */


int main(){
    float horas_trabajadas, salario_semanal, tarifa_hora;
    int dias_laborados;
    printf("--------------------------------\n");
    printf("           BIENVENIDO         \n");
    printf("--------------------------------\n");
    printf("\n¿Cuantos dias a la semana trabajo?: ");
    scanf("%i", &dias_laborados);
    printf("\nIngrese la tarifa por hora: ");
    scanf("%f", &tarifa_hora);

    while (dias_laborados > 0)
    {
        printf("\nIngrese las horas trabajadas en un día: ");
        scanf("%f", &horas_trabajadas);
        salario_semanal = (dias_laborados * horas_trabajadas) * tarifa_hora;
        printf("\nEl pago por %0.2f horas trabajadas en %i dias es de: %0.2f pesos.", horas_trabajadas, dias_laborados, salario_semanal);
        break;
    }
    return 0;
}
