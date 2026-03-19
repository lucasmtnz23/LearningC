/* Ahora sí, toca ver la utilidad de los punteros,
   Pasando punteros como argumentos de funciones.*/

// Las funciones en C solo pueden devolver un valor, pero claro, ese valor
// puede ser un puntero, por ejemplo un puntero a un array

#include <stdio.h>

void increment(int *p){
    *p = *p + 1;
}

int main(void){
    int i = 10;
    int *j = &i;
    
    increment(j);
    // increment(&i); es otra forma de hacerlo, más concisa

    printf("i is %d\n", i);  // Ahora i es 11
}