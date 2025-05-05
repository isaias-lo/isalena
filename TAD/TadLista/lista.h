#ifndef lista_h
#define lista_h

//definicion del nodo
typedef struct Nodo{
    int dato;
    struct Nodo* siguiente; 
} Nodo; 

//definicion de la lista
typedef struct {
    Nodo* cabeza;
} Lista; 

//funciones
void iniciarLista(Lista* lista);
void agregarALista(Lista* lista, int valor);
void mostrarLista(const Lista* lista);
void vaciarLista(Lista* lista);

#endif