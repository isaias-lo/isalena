## Implementación de un TAD en C

### Paso 1: Definir la estructura de datos

Se usa `struct` para definir el tipo de datos.

```c
typedef struct {
    int valor;
} EjemploTAD;
```

### Paso 2: Crear las operaciones
Se implementan funciones para manipular el TAD.

```c
void inicializar(EjemploTAD *dato, int v) {
    dato->valor = v;
}

int obtenerValor(EjemploTAD *dato) {
    return dato->valor;
}
```

### Paso 3: Crear la interfaz (`.h`)
Se define un archivo de cabecera (`.h`) para exponer las funciones públicas.

```c
#ifndef EJEMPLO_TAD_H
#define EJEMPLO_TAD_H

typedef struct {
    int valor;
} EjemploTAD;

void inicializar(EjemploTAD *dato, int v);
int obtenerValor(EjemploTAD *dato);

#endif
```

### Paso 4: Implementación en un archivo separado (`.c`)
El código se organiza en otro archivo (`.c`) para modularidad.

```c
#include "ejemplo_tad.h"

void inicializar(EjemploTAD *dato, int v) {
    dato->valor = v;
}

int obtenerValor(EjemploTAD *dato) {
    return dato->valor;
}
```

### Paso 5: Uso en el programa principal (`main.c`)

```c
#include <stdio.h>
#include "ejemplo_tad.h"

int main() {
    EjemploTAD miDato;
    inicializar(&miDato, 42);
    printf("Valor almacenado: %d\n", obtenerValor(&miDato));
    return 0;
}
```
