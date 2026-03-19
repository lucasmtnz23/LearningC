#include <stdio.h>

// Pasandolo como puntero al primer elemento
void times2(int *a, int len){
    for (int i = 0; i < len; i++){
        printf("%d\n", a[i]*2);
    }
}

// Lo msimo, pero usando notación de array
void times3(int a[], int len){
    for (int i = 0; i < len; i++){
        printf("%d\n", a[i]*3);
    }
}

// Lo  mismo pero con notación de array con size
void times4(int a[5], int len){
    for (int i = 0; i < len; i++){
        printf("%d\n", a[i]*4);
    }
}

void double_array(int *a, int len){
    // Aquí reside la importancia de los punteros, como pasar un array es lo mismo que pasar un puntero,
    // cuando alteras ese array están haciendolo también en main

    for (int i = 0; i < len; i++)
        a[i] *= 2;  // podemos usar notación de array aunque pasaramos un puntero
}

void print_2D_array(int a[2][3])
{
    for (int row = 0; row < 2; row++) {
        for (int col = 0; col < 3; col++)
            printf("%d ", a[row][col]);
        printf("\n");
    }
}

int main(void){
    int a[5] = {11, 22, 33, 44, 55};
    int *p;

    p = &a[0]; // p apunta al primer elemento del array

    // Pero es lo mismo que hacer directamente:
    
    p = a; // igualito, esto se llama pointer decay y lo veremos más adelante en profundidad

    // PASANDO ARRAYS A FUNCIONES: consultar funciones del principio //

    int x[5] = {11, 22, 33, 44, 55};

    times2(x, 5);
    times3(x, 5);
    times4(x, 5);    

    // Todas las formas en que estas funciones le pasan un array es la misma en realidad
    // El más usado es el primer método
    // Pasar el array con size solo importa en matrices

    // CAMBIANDO ARRAYS EN FUNCIONES //

    int x[5] = {1, 2, 3, 4, 5};

    double_array(x, 5);

    // PASANDO MATRICES A FUNCIONES //

    // La diferencia está en que hace falta identificar en la función todas
    // las dimensiones salvo la primera

    int x[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };

    print_2D_array(x);

}