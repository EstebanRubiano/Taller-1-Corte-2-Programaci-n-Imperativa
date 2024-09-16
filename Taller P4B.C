// Taller corte 2 Punto 4 - Actividad 2


#include <stdio.h>
#define MAX_TAM 100
void imprimir_inverso(int *matriz, int tam) {
    for (int i = tam - 1; i >= 0; i--) {
        printf("%d ", *(matriz + i));
    }
    printf("\n");
}
int main() {
    int tam;
    int matriz[MAX_TAM];
    printf("Tamaño de la matriz: (máximo %d): ", MAX_TAM);
    scanf("%d", &tam);
    if (tam <= 0 || tam > MAX_TAM) {
        printf("Tamaño inválido.\n");
        return 1;
    }
    printf("Elementos de la matriz:\n");
    for (int i = 0; i < tam; i++) {
        printf("Elemento [%d]: ", i);
        scanf("%d", &matriz[i]);
    }
    printf("Matriz al inverso:\n");
    imprimir_inverso(matriz, tam);
    return 0;
}