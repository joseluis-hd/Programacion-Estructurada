#include <stdio.h>
#include <math.h>

/* Calculo de volumen y area de un cilindro */
/* Haro Diaz Jose Luis */
/* 28 de enero de 2023 */

int main () {
    float r, h, volumen, area;
    
    printf("Ingrese el radio en centimetros: ");
    scanf("%f", &r);
    printf("Ingrese la altura en centimetros: ");
    scanf("%f", &h);
    
    volumen = M_PI * pow(r, 2) * h;
    area = 2 * M_PI * r * (r + h);

    printf("El volumen del cilindro es de: %fcm cubicos y su area es de: %fcm cuadrados", volumen, area);

    return 0;
}
