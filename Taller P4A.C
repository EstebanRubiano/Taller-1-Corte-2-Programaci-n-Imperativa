// Taller corte 2 Punto 4 - Actividad 1

#include <stdio.h>
void intercambiar(int *a, int *b) {
    *a = *a + *b;  
    *b = *a - *b;  
    *a = *a - *b;  
}

int main() {
    int N1, N2;
    printf("Number 1: ");
    scanf("%d", &N1);
    printf("Number 2: ");
    scanf("%d", &N2);
    intercambiar(&N1, &N2);

    printf("Number 1: %d\nNumber 2: %d\n", N1, N2);

    return 0;
}