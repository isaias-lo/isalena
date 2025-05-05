#include <stdio.h>
#include <stdlib.h>
#include "lista.h"

void iniciarLista(Lista* lista){
    lista->cabeza = NULL;
}

void agregarALista(Lista* lista, int valor){
    Nodo* nodoNuevo = (Nodo*)malloc(sizeof(Nodo));
    if (nodoNuevo == NULL){
        printf("el nodo esta vacio por culpa de male");
    }
    nodoNuevo->dato = valor;
    nodoNuevo->siguiente = lista->cabeza;
    lista->cabeza = nodoNuevo;
}

void mostrarLista(const Lista* lista){
    Nodo* nodoActual = lista->cabeza;
    while (nodoActual != NULL)
    {
        printf("%d -> ", nodoActual->dato);
        nodoActual = nodoActual->siguiente;
    }
}

void vaciarLista(Lista* lista){
    Nodo* nodoActual = lista->cabeza;
    while (nodoActual !=NULL)
    {
        Nodo* nodoTemporal = nodoActual;
        nodoActual= nodoActual->siguiente;
        free(nodoTemporal);
    }
    lista->cabeza=NULL;
}