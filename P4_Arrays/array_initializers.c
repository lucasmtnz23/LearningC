#include <stdio.h>

#define COUNT 5 // instancia simbólica, el preprocesador reemplazará cada instancia de COUNT
                // por el número 5 antes de compilar

int main(void){

    int a[5] = {22, 37, 3490, 18, 95}; // Inicializamos con estos valores, 
                                       // si ponemos más el compilador se queja.

    // Si inicializamos con menos elemntos se pone automáticamente 0.

    int b[100] = {0}; // para inicilizar un array 'vacío', todo a 0

    // También puedes usar índices para poner valores específicos y el resto con 0's

    int c[10] = {0, 11, 22, [5]=55, 66, 77};

    // equivale a: {0, 11, 22, 0, 0, 55, 66, 77, 0, 0}


    int d[COUNT] = {[COUNT-3]=3, 2, 1}; // 0 0 3 2 1

    // se puede hacer esto también
    int e[] = {22, 37, 3490}; // no hace falta poner e[3]
    
}