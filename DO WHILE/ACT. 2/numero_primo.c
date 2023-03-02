#include <stdio.h>

int main() {
    int num;
    int primo;
    int i;

    do {
        printf("Ingresa un numero: ");
        scanf("%d", &num);

        primo = 1;
        for (i = 2; i < num; i++) {
            if (num % i == 0) {
                primo = 0;
                break;
            }
        }

        if (primo && num > 1) {
            printf("El primer numero primo ingresado es: %d\n", num);
            break;
        }

        printf("%d El numero ingresado no es un numero primo, intenta de nuevo.\n", num);
    } while (1);

    return 0;
}
