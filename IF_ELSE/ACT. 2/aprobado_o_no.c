#include <stdio.h>
#include <stdlib.h>

/* Haro Díaz José Luis
10 de febrero de 2023
Programa que calcula el promedio de un alumno  y determina si aprobo o no*/

int main(){
    float ex1, ex2, cal_ex, proyecto, cal_proy, tarea, cal_tar, calf_final;

    printf("\n                 BIENVENIDO               \n"),
    printf("Ingrese la calificacion del primer examen: ");
    scanf("%f", &ex1);
    printf("Ingrese la calificacion del segundo examen: ");
    scanf("%f", &ex2);
    cal_ex = ((ex1 + ex2)/2) * .30;
    printf("Ingrese la calificacion del proyecto: ");
    scanf("%f", &proyecto);
    cal_proy = proyecto * .40;
    printf("Ingrese la calificacion de tareas: ");
    scanf("%f", &tarea);
    cal_tar = tarea * .30;
    
    calf_final = cal_ex + cal_proy + cal_tar;
    if (calf_final >= 70)
    {
        printf("Aprobado, su calificacion final es: %f ", calf_final);
    }
    else
    {
        printf("Reprobado, su calificacion final es: %.1f", calf_final);
    }
    
return 0;
}
