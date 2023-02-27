#include <stdio.h>
#include <stdlib.h>

/* Haro Diaz Jose Luis
20 de febrero de 2023
Programa que da la velocidad promedio de un corredor en una carrera de 1500m tomando en cuenta los minutos y segundos */


int main(){
    float tiempo, minutos, segundos, velocidad, distancia = 1500;

    while (minutos != 0 || segundos != 0)
    {
        printf("\nIntroduzca 0 para salir: ");
        printf("\nIntroduzca los minutos: ");
        scanf("%f", &minutos);
        printf("\nIntroduzca los segundos: ");
        scanf("%f", &segundos);
        tiempo = segundos + (minutos*60);  
        if (tiempo == 0)
        {
            printf("FIN");
            break;
        }      
        velocidad = distancia / tiempo;
        printf("\nLa velocidad fue: %f m/s", velocidad);
           
    }
    return 0;
}
