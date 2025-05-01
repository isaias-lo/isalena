#include <stdio.h>
#include "ejemplo_tad.h"

int main() {
    EjemploTAD miDato;
    inicializar(&miDato, 42);
    printf("Valor almacenado: %d\n", obtenerValor(&miDato));
    return 0;
}
