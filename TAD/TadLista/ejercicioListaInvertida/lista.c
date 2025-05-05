#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void iniciarLista(Lista* l){
    l->cabeza=NULL;
    l->tamano = 0;
}

void agregarInicio(Lista* l, int dato){
    Nodo* nuevo = (Nodo*)malloc(sizeof(Nodo));
    nuevo->dato = dato;
    nuevo->siguiente = l->cabeza;
    l->cabeza = nuevo;
    l->tamano++;
}

void imprimirLista(Lista* l){
    Nodo* nodoActual = l->cabeza;
    while (nodoActual != NULL)
    {
        printf("%d", nodoActual->dato);
        nodoActual = nodoActual->siguiente;
    }
}

Lista listaInvertida(Lista* l){
    Lista listaNueva;
    iniciarLista(&listaNueva);

    Nodo* nodoActual = l->cabeza;
    while(nodoActual != NULL){
        agregarInicio(&listaNueva, nodoActual->siguiente);
        nodoActual = nodoActual -> siguiente;

    }
    return listaNueva;

}

void liberarLista(Lista* l){
    Nodo* nodoActual = l -> cabeza;
    Nodo* datoTemporal;
    while (nodoActual != NULL){
        datoTemporal = nodoActual;
        nodoActual = nodoActual ->siguiente;
        free(datoTemporal);
    }
    l->cabeza = NULL;
    l->tamano = 0;
}