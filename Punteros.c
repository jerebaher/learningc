#include <stdio.h>

int punteros_screen(){
    /*
        El simbolo '&' sirve para recuperar el puntero de una variable
        Por ejemplo: &x = 634515 siendo '634515' la direccion de memoria de la variable (puntero)
    */

    int x = 10;

    printf("Valor de variable 'x' = %d\n", x);
    printf("Direccion de memoria de 'dirX' = %u\n\n", &x);

    printf("-------------------------\n\n");



    /*
       Para almacenar la direccion de memoria de una variable se utiliza el tipo de dato 'puntero'.
       Su sintaxis consiste en declarar el tipo de dato que se almacena en memoria + un asterisco al final.
       Por ejemplo: int x = 10; entonces int* dirX = &x; o tambien: char c = 'c'; entonces char* dirC = &c;
    */
    char c = 'c';
    char* dirC = &c;

    printf("Valor de variable 'c' = %c\n", c);
    printf("Direccion de memoria de 'dirC' = %u\n\n", dirC);

    printf("-------------------------\n\n");



    /*
        Para recuperar el VALOR de un puntero (direccion de memoria) se utiliza el asterisco al principio
        del nombre de la variable.
        Por ejemplo: int x = 10; -> int* dirX = &x; entonces int xAgain = *dirX;
    */

    int variable = 64509;
    int* variable_pointer = &variable;
    int variableAgain = *variable_pointer;

    printf("Valor de variable 'variable' = %d\n", variable);
    printf("Direccion de memoria de 'variable_pointer' = %d\n", variable_pointer);
    printf("Valor de la variable 'variable_pointer' almacenada en la direccion de memoria %d = %d\n\n", variable_pointer, variableAgain);

    printf("-------------------------\n\n");
}
