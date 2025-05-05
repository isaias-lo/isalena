#include <stdio.h>
#include "lista.h"

int main(){
    Lista l;
    iniciarLista(&l);

    agregarInicio(&l, 2);
    agregarInicio(&l, 6);
    agregarInicio(&l, 9);
    agregarInicio(&l, 6);
    agregarInicio(&l, 1);
    agregarInicio(&l, 8);
    agregarInicio(&l, 4);

    printf("lista original: ");
    imprimirLista(&l);

    Lista l2 = listaInvertida(&l);

    printf("Lista invertida: ");

    imprimirLista(&l2);

    liberarLista(&l);
    liberarLista(&l2);

}