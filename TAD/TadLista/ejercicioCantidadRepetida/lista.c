#include <stdio.h>
#include <stdlib.h>
#include "lista.h"


//FUNCIONES BASICAS DE LA LISTA
void crearLista(Lista* lista){
    lista->cabeza = NULL;
    lista->tamano = 0;
}

void agregarInicio(Lista* lista, int dato){
    Nodo* nodoNuevo = (Nodo*)malloc(sizeof(Nodo));
    nodoNuevo->dato = dato;
    nodoNuevo->siguiente = lista->cabeza;
    lista->cabeza = nodoNuevo;
    lista->tamano++;
}

void agregarFinal(Lista* lista, int dato){
    Nodo* nodoNuevo = (Nodo*)malloc(sizeof(Nodo));
    nodoNuevo->dato = dato;
    nodoNuevo->siguiente = NULL;
    if(lista->cabeza == NULL){
        lista->cabeza=nodoNuevo;
    }else{
        Nodo* nodoActual = lista->cabeza;
        while (nodoActual -> siguiente != NULL)
        {
            nodoActual = nodoActual -> siguiente;
        }
        nodoActual->siguiente = nodoNuevo;
    }
    lista->tamano++;
}

void imprimirLista(Lista* lista){
    Nodo* nodoActual = lista->cabeza;
    while (nodoActual != NULL){
        printf("%d", nodoActual->dato);
        nodoActual = nodoActual -> siguiente;
    }
}

void liberarLista(Lista* lista){
    Nodo* nodoActual = lista->cabeza;
    while (nodoActual != NULL){
        Nodo* nodoTemporal = nodoActual;
        nodoActual = nodoActual -> siguiente;
        free(nodoTemporal);
    }
    lista->cabeza=NULL;
    lista->tamano=0;
}

//FUNCIONES DEL ITERADOR
Iterador crearIterador(Lista* lista){
    Iterador i;
    i.nodoActual = lista->cabeza;//Primer nodo del iterador va a ser igual al primer nodo de la lista
    return i;
}

int haySiguiente(Iterador* i){
    return i->nodoActual != NULL;
}

int obtenerSiguiente(Iterador* i){
    if(!haySiguiente(i)){
        printf("hay un error");
    }
    int valor = i->nodoActual->dato;
    i->nodoActual = i->nodoActual->siguiente;
    return valor; 
}

//Funcion principal: Obtener elementos maximos
Lista obtenerRepetidos(Lista* lista){
    Lista listaTemporal;
    crearLista(&listaTemporal);

    if(lista->cabeza == NULL) return listaTemporal;

    //Encontrar el numero mayor
    Iterador i = crearIterador(lista);
    int valorMaximo = obtenerSiguiente(&i);
    while (haySiguiente(&i))
    {
        int valor = obtenerSiguiente(&i);
        if(valor > valorMaximo) valorMaximo = valor;
    }
    
    //Recoletar los valores repetidos del numero maximo

    i = crearIterador(lista);

    while (haySiguiente(lista))
    {
        int valor = obtenerSiguiente(&i);
        if(valor == valorMaximo){
            agregarFinal(&listaTemporal, valor);
        }

    }
    return listaTemporal;
}



