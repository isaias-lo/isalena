#ifndef pila_h
#define pila_h

#include <stdbool.h>

#define TAM_MAX 100

typedef struct
{
    int elementos[TAM_MAX];
    int siguiente;
} Pila;

void crearPila(Pila *pila);
bool apilar(Pila *pila, int valor);
bool desapilar(Pila *pila, int *valor);
bool esVacia(Pila *pila);
bool esLlena(Pila *pila);

void cima(Pila *pila);




#endif