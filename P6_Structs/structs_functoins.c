#include <stdio.h>

/* Se puede pasar la estructura directamente o un puntero a la estructura (recordemos
que al pasar algo a una función se hace una copia). Entonces la gracia está en pasar un puntero
cuando queramos editar la estructura original*/

struct car {
    char *name;
    float price;
    int speed;
};


