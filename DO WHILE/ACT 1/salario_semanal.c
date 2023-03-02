#include <stdio.h>

/* Haro Díaz José Luis
27 de febrero de 2023
Programa que calcula el salario semanal de n numero de trabajadores baja ciertas condiciones de horas */

int main() {
    int n, horas, i = 1;
    float salario;
    
    printf("Ingresa el numero de trabajadores: ");
    scanf("%d", &n);
    
    do {
        printf("\nIngresa el numero de horas trabajadas por el trabajador %d: ", i);
        scanf("%d", &horas);
        
        if (horas <= 40) {
            salario = horas * 20.0;
        }
        else {
            salario = 40 * 20.0 + (horas - 40) * 25.0;
        }
        
        printf("El salario semanal del trabajador %d es $%.2f pesos\n", i, salario);
        
        i++;
    } while (i <= n);
    
    return 0;
}
