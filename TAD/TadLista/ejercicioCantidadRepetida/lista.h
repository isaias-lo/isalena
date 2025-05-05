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

//BIENVENIDA AL ITERABLEEEEEE
typedef struct{
    Nodo* nodoActual;
} Iterador;

//Funciones basicas de la lista
void crearLista(Lista* lista);
void ingresarInicio(Lista* lista, int dato);
void ingresarFinal(Lista* lista, int dato);
void mostrarLista(Lista* lista);
void liberarLista(Lista* lista);


//Funciones del iterador
Iterador crearIterador(Lista* lista);
int haySiguiente(Iterador* i);
int obtenerSiguiente(Iterador* i);


//Logica principal
Lista obtenerRepetidos(Lista* lista);




#endif