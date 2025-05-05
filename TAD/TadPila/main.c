#include "pila.h"

int main(){
    Pila miPila;
    int valor;

    crearPila(&miPila);

    apilar(&miPila, 10);
    apilar(&miPila, 20);

    if(cima(&miPila, &valor)){
        printf("Cima: %d", valor);
    }

    while (desapilar(&miPila, &valor))
    {
        printf("Desapilado: %d", valor);
    }

    return 0;
    
}