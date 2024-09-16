// Taller corte 2 Punto 3 - Actividad 1


#include <stdio.h>


int main() {
    int temperaturas[3][7][24];
    float promedio[3];
    int ciudad, dia, hora;


    int ciudad1[7] = {20, 21, 19, 22, 23, 20, 21};
    int ciudad2[7] = {25, 26, 24, 23, 27, 25, 26};
    int ciudad3[7] = {30, 29, 28, 31, 32, 30, 29};


    for (ciudad = 0; ciudad < 3; ciudad++) {
        for (dia = 0; dia < 7; dia++) {
            for (hora = 0; hora < 24; hora++) {
                if (ciudad == 0) {
                    temperaturas[ciudad][dia][hora] = ciudad1[dia];
                } else if (ciudad == 1) {
                    temperaturas[ciudad][dia][hora] = ciudad2[dia];
                } else {
                    temperaturas[ciudad][dia][hora] = ciudad3[dia];
                }
            }
        }
    }


    for (ciudad = 0; ciudad < 3; ciudad++) {
        float suma = 0;
        for (dia = 0; dia < 7; dia++) {
            suma += temperaturas[ciudad][dia][0];
        }
        promedio[ciudad] = suma / 7;
    }


    printf("Promedio de temperaturas:\n");
    for (ciudad = 0; ciudad < 3; ciudad++) {
        printf("Ciudad %d: %.2f\n", ciudad + 1, promedio[ciudad]);
    }


    return 0;
}