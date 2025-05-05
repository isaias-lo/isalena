#include <stdio.h>
#include "lista.h"

int main(){
    Lista l;
    crearLista(&l);

    int datos[] = {1,3,6,6,3,8,0,5,3,9,6,4,9};

    for (int i = 0; i < 9; i++)
    {
        agregarFinal(&l, datos[i]);
    }

    printf("Lista inicial: ");
    imprimirLista(&l);

    Lista listaNueva = obtenerRepetidos(&l);

    printf("Elementos con valor maximo: ");

    imprimirLista(&listaNueva);

    liberarLista(&l);
    liberarLista(&listaNueva);

    return 0;    
}