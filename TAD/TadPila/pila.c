#include <stdbool.h>
#include "pila.h"

void crearPila(Pila *pila){
    pila->siguiente = -1;
}

bool esVacia(Pila *pila){
    return pila->siguiente == -1;
}

bool esLlena(Pila *pila){
    return pila->siguiente == TAM_MAX - 1;
}

bool apilar(Pila *pila, int valor){
    if(esLlena(pila)) {
        return false;
    }
    pila->elementos[++(pila->siguiente)] = valor;
    return true;
}

bool desapilar(Pila *pila, int *valor){
    if(esVacia(pila)){
        return false;
    }
    *valor = pila->elementos[(pila->siguiente)--];
    return true;
}

bool cima(Pila *pila, int *valor){
    if(esVacia(pila)){
        return false;
    }
    *valor = pila->elementos[pila->siguiente];
    return true;
}