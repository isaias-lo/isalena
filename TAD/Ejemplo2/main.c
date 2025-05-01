#include <stdio.h>
#include "mitad.h"

int main(){
    MiTAD x;
    inicializar(&x, 5);
    sumar(&x, 3);
    sumar(&x, 5);
    printf("Resultado: %d\n", obtener(&x)); // Muestra: 8
}
