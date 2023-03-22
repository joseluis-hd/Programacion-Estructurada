#include <stdio.h>
#include <stdlib.h>

/* Haro Diaz Jose Luis
21 de marzo de 2023
Programa que llena una matriz de [8] x [8] almacena la suma de los renglones y la suma de las columnas en un vector e imprime el vector resultante. */

int main() {
  int a[8][8];
  int b[16] = {0};

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      a[i][j] = rand() % 31;
    }
  }

  for (int i = 0; i < 8; i++) {
    for (int j = 0; j < 8; j++) {
      b[i] += a[i][j];
    }
  }

  for (int j = 0; j < 8; j++) {
    for (int i = 0; i < 8; i++) {
      b[j + 8] += a[i][j];
    }
  }

  for (int i = 0; i < 16; i++) {
    printf("[%d]", b[i]);
  }
  printf("\n");

  return 0;
}
