// Taller corte 2 Punto 1 - Actividad 1


#include <stdio.h>


int main() {
    int size, i;
    printf("Tamaño del arreglo: ");
    scanf("%d", &size);
    int arr[size];
    printf("Introduce los elementos del arreglo:\n");
    for (i = 0; i < size; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    int suma = 0, maximo = arr[0], minimo = arr[0];
    float promedio;
    for (i = 0; i < size; i++) {
        suma += arr[i];
        if (arr[i] > maximo) {
            maximo = arr[i];
        }
        if (arr[i] < minimo) {
            minimo = arr[i];
        }
    }
    promedio = (float)suma / size;
    printf("Suma: %d\n", suma);
    printf("Promedio: %.2f\n", promedio);
    printf("Máximo: %d\n", maximo);
    printf("Mínimo: %d\n", minimo);
    return 0;
}