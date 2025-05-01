#include "mitad.h"

void inicializar(MiTAD *t, int valor) {
    t->numero = valor;
}

void sumar(MiTAD *t, int otro) {
    t->numero += otro;
}

int obtener(MiTAD *t) {
    return t->numero;
}


