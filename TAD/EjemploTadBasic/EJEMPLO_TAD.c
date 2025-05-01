#include "ejemplo_tad.h"

void inicializar(EjemploTAD *dato, int v) {
    dato->valor = v;
}

int obtenerValor(EjemploTAD *dato) {
    return dato->valor;
}
