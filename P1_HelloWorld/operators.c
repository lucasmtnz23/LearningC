/* Prácticamente todos los operadores de otros lenguajes son iguales en C,
la única excepción sería la potencia, que no existe y habría que usar
la función pow() detnro de math.h*

Lo misma para booleanos*/

#include <stdio.h>
#include <stdlib.h> // Para usar rand

int main(void) {
    // Ternary Operator
    int x = 5;
    int y = 0;  

    y += x > 10? 17: 37; // Si x es mayor que 10, se suma 17 a y, de lo contrario se suma 37
    printf("y = %d\n", y);

    // Ejemplo que printea si un número es par o impar
    printf("El número %d es %s. \n", x, x % 2 == 0? "par" : "impar");


    // The sizeof Operator: dice, en bytes, el tamaño de una expresión en memoria
    // Puede variar entre sistemas excepto char y sus variantes que siempre es 1 byte

    int a = 999;

    // %zu is the format specifier for type size_t
    // If your compiler balks at the "z" part, leave it off

    printf("%zu\n", sizeof a);      // Prints 4 on my system
    printf("%zu\n", sizeof(2 + 7)); // Prints 4 on my system
    printf("%zu\n", sizeof 3.14);   // Prints 8 on my system

    printf("%zu\n", sizeof(int));   // Prints 4 on my system
    printf("%zu\n", sizeof(char));  // Prints 1 on all systems


    // single statment, sin {}
    int z = 10;

    if (z == 10) printf("z is 10\n");

    // bloque de varias acciones, con {}
    if (z == 10) {
        printf("z is 10\n");
        printf("And also this happens when z is 10\n");
    }

    // if-else statment
    if (z > 10) {
        printf("z is greater than 10\n");
        printf("And also this happens when z is greater than 10\n");
    } else {
        printf("z is not greater than 10\n");
    }

    // while statment
    int count = 0;
    while (count < 10) {
        printf("Count is %d\n", count);
        count++;
    }

    // loops infinitos, while true
    /* while (1) {
        printf("This will print forever!\n");
    } */

    // do-while statment: la diferencia con el while normal es que el do-while se ejecuta al menos una vez, incluso si la condición es falsa, porque la condición se evalúa después de ejecutar el bloque de código. En cambio, el while normal evalúa la condición antes de ejecutar el bloque de código, por lo que si la condición es falsa desde el principio, el bloque de código no se ejecutará en absoluto. 
        int r;

        do {
            r = rand() % 100; // Get a random number between 0 and 99
            printf("%d\n", r);
        } while (r != 37);    // Repeat until 37 comes up


    // for statment, prácticamente igual que js
    for (int i = 0; i < 10; i++) {
        printf("i is %d\n", i);
    }

    // con comas se puede hacer varias cosas en el for
    for (int i = 0, j = 999; i < 10; i++, j--) {
        printf("%d, %d\n", i, j);
    }


    // switch statment, también parecido a js, pero con la diferencia de que no hace falta un break después de cada case, aunque es recomendable para evitar errores
    // es como un bloque de if-else pero más eficiente O(1) en lugar de O(n)
    // sin break, el programa salta al siguiente case, lo que se llama "fall through"
    int goat_count = 3;

    switch (goat_count) {
        case 1:
            printf("There is 1 goat.\n");
            break;
        case 2:
            printf("There are 2 goats.\n");
            break;
        case 3:
            printf("There are 3 goats.\n");
            break;
        default:
            printf("There are many goats.\n");
    }

}

// %d es para enteros, %s es para char *, %c es para char; %f es para float

/* Diferencia importante entre operador ternario e if statment: mientras que
el fi es un control de flujo, es decir, no devuelve nada, hace que la CPU salte
a diferentes direcciones de memoria; el operador ternaria es una operación matmática,
al ser una expresión puedes ponerla en cualquier sitio donde se espere un valor*/

