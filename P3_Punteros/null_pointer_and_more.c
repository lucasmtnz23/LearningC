/* Cualquier puntero de cualquier tipo puede asociarse a un valor especial,
    NULL, esto indica que el puntero no apunta a nada.*/

#include <stddef.h> // para incluir los punteros a null, también valdría stdio.h


int main(void){
    int *p; 
    p = NULL;
    
    /* 
    *p = 12; // Crash, porque la dirección de memoria está protegida 
    
       por qué nos puede ser útil a pesar de parecer un error en un principio
       nos sirve para hacer comprobaciones por ejemplo:

       if (!p){...} 

       aquí por ejemplo estaríamos comprobando que ese puntero si que apunte a algo,
       es decir, que ha sido declarado, puesto que NULL es falsy
    */

    // OTRAS FORMAS DE DECLARAR PUNTEROS

    int a;
    int *p;

    int a, *p; // Lo mismo que arriba.

    // sizeof en punteros

    printf("%zu\n", sizeof(int)); // el tamaño de un entero (4 bytes en la mayoría de los sistemas)
    
    printf("%zu\n", sizeof p); // el tamaño de int *, es decir de la dirección de memoria (64 bits en sistemas modernos)

    printf("%zu\n", sizeof *p); // el tamaño de un entero

}