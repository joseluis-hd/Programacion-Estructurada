#include <stdio.h>

/* Haro Diaz Jose Luis
2 de marzo de 2023
Programa que imprime el total pagado por n clientes en un supermercado */

int main() {
    int num_clientes;
    float precio, total = 0;
    
    printf("--------------------------------\n");
    printf("          BIENVENIDO       \n");
    printf("--------------------------------\n");
    printf("Ingresa el numero de clientes atendidos: ");
    scanf("%i", &num_clientes);
    
    for (int i = 0; i < num_clientes; i++) {
        printf("Ingrese el total pagado por el cliente %d: $", i+1);
        scanf("%f", &precio);
        
        total += precio;
    }
    
    printf("El total de todos los clientes atendidos es de $%.2f pesos\n", total);
    
    return 0;
}
