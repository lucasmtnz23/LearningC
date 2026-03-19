#include <stdio.h>
#include <stdbool.h> // Solo necesario si no estamos C23

int main(void) {
    bool x = true;
    int y = 1;

    if (x) {
        printf("x is true!\n");
    }

    if (y) {
        printf("y is also true!\n");
    }
    
    printf("%d\n", true == 12);  // true equivale a 1
}