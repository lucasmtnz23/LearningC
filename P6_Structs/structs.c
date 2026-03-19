#include <stdio.h>

/* Son como clases de python pero sin métodos, solo con datos, estos datos
pueden ser de distintos tipos y son muy útiles para pasar como valor a funciones o
para estructurar el código y hacerlo más leíble. */

// DECLARAR UNA STRUCT: suele hacerse fuera de las funciones para que sea global //

struct car {
    char *name;
    float price;
    int speed;
};

// Al hacer esto hemos creado un nuevo tipo, en este caso de tipo struct car

int main(void){
    struct car saturn; // variable saturn de tipo struct car no inicializada
    
    // STRUCT INICIALIZADORES //

    // accediendo a los atributos con . //
    saturn.name = "Saturn SL/2";
    saturn.price = 15999.99;
    saturn.speed = 175;

    // directamente, problema, tiene que estar en orden
    struct car saturn2 = {"Saturn SL/2", 16000.99, 175};

    // solución:
    struct car saturn3 = {.speed=175, .name="Saturn SL/2"};

}