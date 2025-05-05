#ifndef lista_h
#define lista_h

typedef struct Nodo{
    int dato;
    struct Nodo* siguiente;    
}Nodo;

typedef struct Lista{
    Nodo* cabeza;
    int tamano;
} Lista; 

//Inicializa una lista vacia
void iniciarLista(Lista* l);

//Se agrega un valor al inicio
void agregarInicio(Lista* l, int dato);

//Imprime la lista
void imprimirLista(Lista* l);

//Invierte una lista
Lista listaInvertida(Lista* l);

// Libera la memoria
void liberarLista(Lista* l);
#endif