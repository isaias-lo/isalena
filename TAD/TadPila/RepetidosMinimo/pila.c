#include <stdio.h>
#include <stdlib.h>
#include "pila.h"

void crearPila(Pila* pila){
    pila->ultimo = 0;
}

int estaVacia(Pila* pila){
    return pila->ultimo == 0;
}

void apilar(Pila* pila, int dato){
    if(pila->tamano >= MAX_PILA){
        printf("Error: Pila llena");
        return;
    }
    pila->tamano[pila->ultimo++] = dato;
}

int desapilar(Pila* pila){
    if(estaVacia(pila)){
        printf("Error: pila vacia");
        return;
    }
    return pila->tamano[--pila->ultimo];
}

int cima(Pila* pila){
    if(estaVacia(pila)){
        printf("Error: pila vacia");
        return;
    }
    return pila->tamano[pila->ultimo - 1];
}

void imprimirPila(Pila* pila){
    for (int i = pila->ultimo; i >=0; i--)
    {
        printf("%d", pila->tamano[i]);
    }
}

//Logica de buscar clave y obtener una lista con esas claves
Pila buscarClave(Pila* pila, int clave){
    Pila resultado;
    crearPila(&resultado);

    //copiar sin alterar la pila original (vamos acceder por indice)
    for (int i = 0; i < pila->ultimo; i++)
    {
        int valor = pila->tamano[i];
        if(valor == clave){
            apilar(&resultado, valor);
        }//Pila puede tener [1,3,5,2,5,4,7,5], clave=5 / Pila resultado = [5,5,5]
    }//Pila posicion = [2,4,7]
    return resultado;   
}

Pila buscarPosicionesClave(Pila* pila, int clave){
    Pila posiciones; 
    crearPila(&posiciones);

    for (int i = 0; i < pila->ultimo; i++)
    {
        if(pila->tamano[i] == clave){
            apilar(&posiciones, i); //Vamos a guardar la posicion
        }
    }
    return posiciones;
}