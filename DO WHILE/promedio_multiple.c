#include <stdio.h>

/* Haro Díaz José Luis
27 de febrero de 2023
Programa que calcula el promedio de g grupos, con n estudiantes y m materias */

int main() {
    int g, n, m;
    printf("Ingresa el numero de grupos: ");
    scanf("%d", &g);
    printf("Ingresa cuantos estudiantes hay en cada grupo: ");
    scanf("%d", &n);
    printf("Ingresa las materias que toma cada estudiante: ");
    scanf("%d", &m);

    int i = 1, j = 1, k = 1;
    float total = 0;

    do {
        float grupos_total = 0;
        printf("\nGrupo %d:\n", i);
        j = 1;

        do {
            float estudiantes_total = 0;
            printf("Estudiante %d:\n", j);
            k = 1;

            do {
                float c1, c2, c3, prom_materias;
                printf("Ingresa la calificacion por materia %d (tres calificaciones): ", k);
                scanf("%f %f %f", &c1, &c2, &c3);
                prom_materias = (c1 + c2 + c3) / 3;
                estudiantes_total += prom_materias;
                k++;
            } while (k <= m);

            float estudiantes_prom = estudiantes_total / m;
            grupos_total += estudiantes_prom;
            printf("Estudiante %d promedio: %.2f\n", j, estudiantes_prom);
            j++;
        } while (j <= n);

        float grupos_prom = grupos_total / n;
        total += grupos_prom;
        printf("\nGrupo %d promedio: %.2f\n", i, grupos_prom);
        i++;
    } while (i <= g);

    float prom_tot = total / (g * n * m);
    printf("\nPromedio total: %.2f\n", prom_tot);

    return 0;
}
