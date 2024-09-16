// Taller corte 2 Punto 1 - Actividad 2

#include <stdio.h>


int main() {
    int n, i, j, det = 0;
    printf("Ingrese el tamaño de la matriz (n x n): ");
    scanf("%d", &n);
    int matriz[n][n];
    printf("Ingrese los elementos de la matriz:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    for (i = 0; i < n; i++) {
        int sumaFila = 0;
        for (j = 0; j < n; j++) {
            sumaFila += matriz[i][j];
        }
        printf("Suma de fila %d: %d\n", i + 1, sumaFila);
    }
    for (j = 0; j < n; j++) {
        int sumaColumna = 0;
        for (i = 0; i < n; i++) {
            sumaColumna += matriz[i][j];
        }
        printf("Suma de columna %d: %d\n", j + 1, sumaColumna);
    }
    if (n == 2) {
        det = matriz[0][0] * matriz[1][1] - matriz[0][1] * matriz[1][0];
        printf("Determinante: %d\n", det);
    } else if (n == 3) {
        det = matriz[0][0] * (matriz[1][1] * matriz[2][2] - matriz[1][2] * matriz[2][1])
            - matriz[0][1] * (matriz[1][0] * matriz[2][2] - matriz[1][2] * matriz[2][0])
            + matriz[0][2] * (matriz[1][0] * matriz[2][1] - matriz[1][1] * matriz[2][0]);
        printf("Determinante: %d\n", det);
    } else {
        printf("El determinante solo se calcula para matrices de 2x2 o 3x3.\n");
    }
    return 0;
}