#include <stdio.h>

/* Haro Diaz Jose Luis
2 de marzo de 2023
Programa que determina el color de sticker de n vehiculos sabiendo su ultimo digito de matricula */

int main (){
    int amarillo=0, rosa=0, rojo=0, verde=0, azul=0;
    int n, ultimo_digito ;
    
    printf("--------------------------------\n");
    printf("            BIENVENIDO       \n");
    printf("--------------------------------\n");
    printf("Ingrese el numero de autos que ingresan: "); 
    scanf("%i", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingrese el ultimo digito de la placa: ");
        scanf("%d", &ultimo_digito);
        
        
        if (ultimo_digito == 1 || ultimo_digito == 2) {
            amarillo++;
        } else if (ultimo_digito == 3 || ultimo_digito == 4) {
            rosa++;
        } else if (ultimo_digito == 5 || ultimo_digito == 6) {
            rojo++;
        } else if (ultimo_digito == 7 || ultimo_digito == 8) {
            verde++;
        } else if (ultimo_digito == 9 || ultimo_digito == 0) {
            azul++;
        }
    }
    printf("Numero de autos con calcomania color amarillo: %d\n", amarillo);
    printf("Numero de autos con calcomania color rosa: %d\n", rosa);
    printf("Numero de autos con calcomania color rojo: %d\n", rojo);
    printf("Numero de autos con calcomania color verde: %d\n", verde);
    printf("Numero de autos con calcomania color azul: %d\n", azul);
    return 0;
}
