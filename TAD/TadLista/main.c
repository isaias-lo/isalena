#include <stdio.h>
#include "lista.h"

int main(){
    Lista listaMale;

    iniciarLista(&listaMale);
    agregarALista(&listaMale, 4);
    agregarALista(&listaMale, 5);
    agregarALista(&listaMale, 10);

    printf("Contenido de mi lista:");
    mostrarLista(&listaMale);

    vaciarLista(&listaMale);
    return 0;
}