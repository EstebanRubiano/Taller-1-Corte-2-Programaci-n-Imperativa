// Andres Esteban Rubiano Rodriguez - 67001554
// Punto 2. Implementación de Funciones en C
// Actividad 2: Conversión de temperatura con funciones


/*Crea un programa que ofrezca al usuario convertir una temperatura 
de Celsius a Fahrenheit o de Fahrenheit a Celsius mediante funciones separadas 
para cada conversión*/


#include <stdio.h>


float celsius_a_fahrenheit(float celsius){
    float fahrenheit = (celsius * 9 / 5) + 32;
    return fahrenheit;
}


float fahrenheit_a_celsius(float fahrenheit){
    float celsius = (fahrenheit - 32) * 5 / 9;
    return celsius;
}


int main(){
    int opcion;
    float temperatura;
    printf("Seleccione la conversi%cn:\n",162);
    printf("1. Celsius a Fahrenheit\n");
    printf("2. Fahrenheit a Celsius\n");
    scanf("%d", &opcion);
    printf("Ingrese la temperatura: ");
    scanf("%f", &temperatura);
    switch (opcion){
    case 1:
        printf("%.2f grados Celsius equivalen a %.2f grados Fahrenheit\n", temperatura, celsius_a_fahrenheit(temperatura));
        break;
    case 2:
        printf("%.2f grados Fahrenheit equivalen a %.2f grados Celsius\n", temperatura, fahrenheit_a_celsius(temperatura));
        break;
    default:
        printf("Opci%cn inv%clida.\n",162,160);
    }
    return 0;
}


