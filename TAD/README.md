# Introducción a TAD (Tipo Abstracto de Datos) en C

## ¿Qué es un TAD?

Un **Tipo Abstracto de Datos (TAD)** es una forma de organizar y manejar los datos en la programación. Define **qué operaciones se pueden realizar sobre un conjunto de datos** y **cómo se comportan esas operaciones**, **sin mostrar los detalles internos** de implementación.

Un TAD **oculta la estructura interna** y **expone sólo lo necesario** para su uso. En C, aunque no existe soporte directo como en lenguajes orientados a objetos, se puede implementar un TAD combinando:

- Estructuras (`struct`)
- Funciones (`.c`)
- Encabezados (`.h`)

---

## ¿Por qué usar TAD?

- Organiza el código
- Mejora la reutilización
- Oculta la implementación
- Facilita el mantenimiento
- Permite trabajar como si fuera un "objeto" o módulo

---

## Componentes de un TAD

1. **Datos**: Representados con `struct`.
2. **Operaciones**: Funciones que manipulan esos datos.
3. **Interfaz pública**: Lo que otros archivos pueden usar (definido en `.h`).
4. **Implementación privada**: Lo que queda oculto (definido en `.c`).

---

# Tipos de TAD (Tipos Abstractos de Datos)

En programación, los Tipos Abstractos de Datos (TAD) son modelos para organizar y manipular datos. Cada TAD define **qué operaciones se pueden hacer** y **cómo se comportan** los datos, sin importar cómo están implementados internamente.

A continuación, te presentamos los TAD más comunes:

---

## 1. Lista

Una **Lista** es una colección ordenada de elementos.

### Tipos:
- Lista simple
- Lista doble
- Lista circular

### Operaciones típicas:
- Insertar elemento
- Eliminar elemento
- Buscar elemento
- Recorrer lista

### Ejemplo:
```c
int lista[100];
```

## 2. Pila (Stack)
Una Pila funciona con el principio **LIFO** (Last In, First Out – El último en entrar es el primero en salir).

### Operaciones típicas:
- Apilar (`push`)
- Desapilar (`pop`)
- Ver tope (`peek`)
- Verificar si está vacía o llena

### Ejemplo de uso:
```
push(pila, 10);
valor = pop(pila);
```

## 3. Cola (Queue)
Una Cola funciona con el principio **FIFO** (First In, First Out – El primero en entrar es el primero en salir).

# Operaciones típicas:
- Encolar (`enqueue`)
- Desencolar (`dequeue`)
- Ver frente y final
- Verificar si está vacía o llena

## 4. Arboles (Tree)
## 5. Grafo (Graph)
## 6. Conjunto (Set)