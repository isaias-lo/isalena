#include <stdio.h>
#include "pila.h"

int main(){
    Pila pila;
    crearPila(&pila);

    int datos[] = {1,3,5,2,5,4,7,5};


    for (int i = 0; i < 8; i++)
    {
        apilar(&pila, datos[i]);
    }

    int clave = 5; 

    printf("Pila orginal: ");
    imprimirPila(&pila);

    Pila posiciones = buscarPosicionesClave(&pila,clave);

    printf("Posiciones de la clave %d:", clave);
    imprimirPila(&posiciones); //Deberia ser: 2,4,7
    
    Pila repetidos = buscarClave(&pila,clave);
    printf("Pila repetidas: ");
    imprimirPila(&repetidos);
}