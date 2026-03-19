#include <stdio.h>
#include <string.h>

// Empezamos fuertes, parece que aquí hasta los strings son punteros

int str_len(char *t){
    int count = 0;
    while (t[count] != '\0'){  // aquí si usamos '' porque es un solo carácter
        count ++;
    }
    return count;
}

int main(void){
    
    // STRING LITERALS. Carácteres dentro de "", como ya había descubierto,
    // las comillas simples son para carácters simples.

    // "When asked if this string had quotes in it, she replied, \"It does.\""

    // STRING VARIABLES //

    char *s = "Hello, world!"; // Un puntero a un char, H
    printf("%s\n", s);

    // STRING VARIABLES AS ARRAYS //

    char f[] = "Hello, world!";

    // Esto significa que se puede acceder a los carácteres con notación de array

    for (int i = 0; i < 13; i++)
        printf("%c", f[i]);  // aquí usamos %c no %s
    printf("\n");


    // STR INITIALIZERS //

    /* Realmente las inicializaciones anteriores sí son diferentes: a la hora de inicializar como puntero, lo que ocurre es que se almacena en un chunk de memoria lejos de 
    el resto de tu código, en una zona only read por temas de seguridad y porque los string literals son variables y muy pesados y se hace así básicamente.
    Por otra parte, al hacerlo como array se crea una una copia mutable en el stack, haciendolo mutable. A mayores, la memoria de los literales se llama Data Segment
    y está optimizado por el compilador guardando todos los literales iguales una sola vez y apuntando cuando se hacen copias como arrays al mismo sitio. */

    // STR LENGTH //

    /*C no lo traquea, hay que usar <string.h>*/

    printf("The string is %zu bytes long.\n", strlen(s));

    // STRING TERMINATION //

    /* Los lenguajes de programación tienen dos opciones para almacenar strings en memoria: pueden guardar el string con un número indicando la longitud o pueden añadir al final
    un byte especial llamado 'Terminator'. La segunda opcion ahorra un byte cada vez que uns tring tiene más de 255 carácteres. Ahora no parece mucho pero en su momento
    era importante. Por tanto un string en C es un puntero al primer carácter y un zero-byte o NUL character (\0)*/

    char *j = "Hello!"; // Realmente esto es Hello!\0 en memoria 

    str_len(j); // básicamente esto es lo que hace strlen()

    // COPIANDO STRINGS //

    /* No se puede hacer una copia usando = porque solo hace una copia del puntero, con lo cual acabas con dos punteros que apuntan al mismo sitio.
    Lo que hay que hacer es copiar byte a byte. En la práctica se usa strcpy()*/

    char *z;

    z = j; // Aquí si modificacoms z, vamos a modificar j.

    // es importante al usar strcpy() que el array destino tenga espacio suficiente para almacenar la copia

    char z2[100]; // espacio de sobra

    strcpy(z2, j);  // esto es una copia real, lo que hagamos a z2 no afecta a j en nada

}