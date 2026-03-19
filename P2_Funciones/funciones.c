#include <stdio.h>
/* Cuando pasas un argumento a una función, se crea una copia  de ese 
   argumento y se guarda en el correspondiente parámetro. Si el argumento
   es una variable, una copia del valor de esa variables se crea y almacena
   en el parámetro. */


// el int indica el tipo que devuelve la función
int plus_one(int n) {
    return n + 1;
}

/*aquí el perfecto ejemplo, más adelanate vemos como se comporta*/
void increment(int a){
    a++;
}

// se supone que no puedes llamar una función no declarada, pero lo
// que sí puedes es crer un 'prototipo' de la función, es decir,
// declarar la función sin su cuerpo, para que el compilador sepa que existe

int foo(void);

// void indica que la función no toma argumentos
int main(void) {
    int i = 10, j; // incializamos dos int, i con valor 10 y j sin valor
    j = plus_one(i);

    printf("i: %d, j: %d\n", i, j);


    increment(i); // i se está copiando en el parámetro a, por lo tanto no se modifica el valor de i
    printf("i: %d\n", i); // i sigue siendo 10


    i = foo(); // aquí se puede llamar a foo porque se declaró
    printf("i: %d\n", i); // devuelve 3490

}

int foo(void) {
    return 3490;
}