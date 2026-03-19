/* Los arrays en C no son como en otros lenguajes, básicamente tienes
   un puntero que apunta a la primera posición del array y el resto
   se almacena contiguo en la memoria*/

#include <stdio.h>

void foo(int x[12]){
    printf("%zu\n", sizeof x); // 8 bytes, que es lo que pesa un puntero
}

int main(void){
    float f[4]; // Declaramos un array de 4 floats

    f[0] = 3.14159; // La indexación obviamente empieza en 0
    f[1] = 1.41421;
    f[2] = 1.61803;
    f[3] = 2.71828;

    for (int i = 0; i<4; i++){
        printf("%f\n", f[i]);  // accedemos al elemento i, por debajo son todo punteros 
    }

    // En C no hay ninguna función que te devuelva el número de elementos
    // de un array, así que hay que ingeniarselas:

    int x[12]; // 12 enteros

    printf("%zu\n", sizeof x); // 48 bytes en total
    printf("%zu\n", sizeof(int)); // 4 bytes por int

    printf("%zu\n", sizeof x / sizeof(int)); // 12 ints

    // en caso de ser un array de char, el peso del array es el número de elementos
    // ya que un char siempre pesa un byte, siempre

    // Esto solo funciona en el scope del array, pues si le pasamos un array a una función
    // no va a hacer nada (realmente al pasar un array estamos pasando el puntero del primer elemento)
    
}