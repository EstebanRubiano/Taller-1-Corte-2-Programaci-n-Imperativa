// Taller corte 2 Punto 3 - Actividad 1


#include <stdio.h>


int main() {
    int m, n, p, i, j, k;


    printf("Ingrese las dimensiones de la primera matriz: ");
    scanf("%d %d", &m, &n);


    int a[m][n];
    printf("Ingrese los elementos de la primera matriz:\n");
    for(i = 0; i < m; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    
    printf("Ingrese las dimensiones de la segunda matriz: ");
    scanf("%d %d", &p, &k);


    if (n != p) {
        printf("Error: La multiplicacion no es válida. Las dimensiones no coinciden.\n");
        return 1;
    }


    int b[p][k];
    printf("Ingrese los elementos de la segunda matriz:\n");
    for(i = 0; i < p; i++)
        for(j = 0; j < k; j++)
            scanf("%d", &b[i][j]);


    int c[m][k];


    for(i = 0; i < m; i++) {
        for(j = 0; j < k; j++) {
            c[i][j] = 0;
            for(p = 0; p < n; p++) {
                c[i][j] += a[i][p] * b[p][j];
            }
        }
    }
    
    printf("El resultado de la multiplicacion de las 2 matrices es: ");
    for(i = 0; i < m; i++) {
        for(j = 0; j < k; j++) {
            printf("%d ", c[i][j]);
        }
    }
    printf("\n");


    return 0;
}