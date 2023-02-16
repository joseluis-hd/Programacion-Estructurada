#include <stdio.h>

/* Haro Díaz José Luis
10 de febrero de 2023
Programa que calcula si un alumno puede ser asistente o no de una carrera */

int main(){
    int mat, carr, sem;
    float prom;
    printf("\n     BIENVENIDO     \n");
    printf("Ingrese su matricula: ");
    scanf("%d", &mat);
    printf("Ingrese su carrera (1 - INDUSTRIAL 2 - TELEMATICA 3 - COMPUTACION 4 - MECANICA): ");
    scanf("%d", &carr);
    printf("Ingrese el semestre: ");
    scanf("%d", &sem);
    printf("Ingrese su promedio: ");
    scanf("%f", &prom);

    switch (carr)
    {
    case 1:
    if (sem >= 6 && prom >= 8.5)
    {
        printf("\n ALUMNO ACEPTADO COMO ASISTENTE, Matricula: %d, Carrera: %d, Promedio: %.1f", mat, carr, prom);
    }
    else
    {
        printf("ALUMNO NO ACEPTADO");
    }
        break;

    case 2:
    if (sem >= 5 && prom >= 9.5)
    {
       printf("\n ALUMNO ACEPTADO COMO ASISTENTE, Matricula: %d, Carrera: %d, Promedio: %.1f", mat, carr, prom);
    }
    else
    {
        printf("ALUMNO NO ACEPTADO");
    }
        break;

    case 3:
    if (sem >= 6 && prom >= 8.8)
    {
        printf("\n ALUMNO ACEPTADO COMO ASISTENTE, Matricula: %d, Carrera: %d, Promedio: %.1f", mat, carr, prom);
    }
    else
    {
        printf("ALUMNO NO ACEPTADO");
    }
        break;

    case 4:
    if (sem >= 7 && prom >= 9.0)
    {
        printf("\n ALUMNO ACEPTADO COMO ASISTENTE, Matricula: %d, Carrera: %d, Promedio: %.1f", mat, carr, prom);
    }
    else
    {
        printf("ALUMNO NO ACEPTADO");
    }
        break;

    default: printf("Error");
        break;
    }

return 0;

}
