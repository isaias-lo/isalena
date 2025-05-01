#ifndef EJEMPLO_TAD_H
#define EJEMPLO_TAD_H

typedef struct {
    int valor;
} EjemploTAD;

void inicializar(EjemploTAD *dato, int v);
int obtenerValor(EjemploTAD *dato);

#endif