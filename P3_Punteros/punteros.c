/* Los tamaños de los tipos de datos no están garantizados, dependen de
   la arquitectura del sistema, es importante (ahora no, pero lo será),
   no pedir espacio directamente si no hacerlo dependiente al sizeof de ese
   tipo.*/

#include <stdio.h>


int main(void){
    int i = 10;

    printf("The value of i is %d\n", i); //10
    printf("And its address is %p\n", (void *)&i); // un número raro en hexadecimal, la dirección de memoria donde se encuentra i

    // la parte de (void *) todavía no la hemos tocado, es para que el compilador no llore, ya veremos

    int j;
    int *p; // sintaxix para definir un puntero que apunta a un int

    p = &j; // ahora p apunta a la dirección de j

    //Dereferncing, sirve para coger el valor asociado a la dirección de memoria que guarda un puntero

    j = 10;
    *p = 20; // ahora la cosa a la que apunta p pasa a valer 20

    printf("i is %d\n", i); // printea 20
    printf("i is %d\n", *p); // también printea 20

}