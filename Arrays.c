#include <stdio.h>

int arrays_screen(){
    /*

    */
    int size;
    printf("Indique el tamaño del array: ");
    scanf("%d", &size);

    int ages[size];
    for(int i = 0; i < size; i++){
        printf("Introduce un numero para la posicion %d del array: ", i+1);
        scanf("%d", &ages[i]);
    }
    printf("\nValor de las posiciones del array:\n");
    for(int i = 0; i < size; i++){
        printf("Ages[%d] = %d\n", i, ages[i]);
    }

    printf("\nDirecciones de memoria:\n");
    for(int i = 0; i < size; i++){
        printf("Ages[%d] = %d\n", i, &ages[i]);
    }

    return 0;
}
