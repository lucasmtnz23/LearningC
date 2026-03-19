#include <stdio.h>

int main(void){
    int i;
    int a[5] = {22, 37, 3490, 18, 95};

    for (i = 0; i < 10; i++){
        printf("%d\n", a[i]);
    }

    // Esto último no va a arrojar ni un warning, pero la realidad es que va
    // a hacer cosas muy raras, de hecho cosas malas y aleatorias.
    // Se le llama undefined behavior y es mejor evitarlo, SIEMPRE
}