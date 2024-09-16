// Andres Esteban Rubiano Rodriguez - 67001554
// Punto 2. Implementación de Funciones en C
//Actividad 1: Factorial de un número con validación


/*Desarrolla un programa que solicite un número entero positivo y 
calcule el factorial de ese número usando una función. Debe incluir una función 
de validación que rechace entradas negativas*/


#include <stdio.h>


int Factor (int n){
    if (n == 0){ 
        return 1;
    } else {
        return n * Factor (n-1);
    }
}


int validarnum(int n) {
    while (n < 0) {
        printf("n%cmero no valido\n",163);
        printf("Por favor, ingrese un n%cmero entero positivo: ",163);
        scanf("%d", &n);
    }
    return n;
}


int main() {
    int num, resultado;
    printf("Por favor, ingrese un n%cmero entero positivo: ",163);
    scanf("%d", &num);
    num = validarnum(num); 
    resultado = Factor(num);
    printf("El factorial de %d es: %d\n", num, resultado);
    return 0;
}

