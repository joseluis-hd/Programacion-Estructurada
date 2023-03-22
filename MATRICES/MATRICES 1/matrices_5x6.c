#include <stdio.h>
#include <stdlib.h>

/* Haro Diaz Jose Luis
21 de marzo de 2023
Programa que llena una matriz de [5] x [6] e imprime cuantos números son ceros, cuantos son positivos y cuantos son negativos. */

int main() {
    int a[5][6];
    int ceros = 0, positivos = 0, negativos = 0;

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            a[i][j] = rand() % 31 - 21; 
        }
    }

    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            if (a[i][j] == 0) {
                ceros++;
            } else if (a[i][j] > 0) {
                positivos++;
            } else {
                negativos++;
            }
        }
    }

    printf("Matriz:\n");
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 6; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    printf("Ceros: %d\n", ceros);
    printf("Positivos: %d\n", positivos);
    printf("Negativos: %d\n", negativos);

    return 0;
}
