#include <stdio.h>

int main(void){
    // las matrices se almacenan por fila

    int row, col;

    int a[2][5] = {
        {0, 1, 2, 3, 4},
        {5, 6, 7, 8, 9}
    };

    for (row = 0; row < 2; row++) {
        for (col = 0; col < 5; col++) {
            printf("(%d,%d) = %d\n", row, col, a[row][col]);
        }
    }
    // se imprime como ya he dicho, por fila

    // Ejemplo de una matriz I 3x3

    int I[3][3] = {[0][0]=1, [1][1]=1, [2][2]=1};
}