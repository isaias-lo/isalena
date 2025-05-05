#ifndef pila_h
#define pila_h

#define MAX_PILA 100

typedef struct {
    int ultimo;
    int tamano[MAX_PILA];
} Pila;

//Funciones basicas
void crearPila(Pila* pila);
void apilar(Pila* pila, int dato);
int desapilar(Pila* pila);
int cima(Pila* pila);
int estaVacia(Pila* pila);
void imprimirPila(Pila* pila);
void liberarPila(Pila* pila);


//Logica
Pila buscarClave(Pila* pila, int clave);
Pila buscarPosicionesClave(Pila* pila, int clave);

#endif