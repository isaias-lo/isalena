# 📘 Función recursiva para detectar palíndromos

Este proyecto muestra cómo construir una función **recursiva** en Python que determine si una cadena de texto es un **palíndromo**.

Un **palíndromo** es una palabra o frase que se lee igual de izquierda a derecha que de derecha a izquierda.

## 🧠 ¿Qué es una función recursiva?

Una función recursiva es aquella que **se llama a sí misma** para resolver un problema. En este caso, utilizamos recursión para comparar los extremos de una palabra hasta llegar al centro.

---

## 🧪 Ejemplos

```c
esPalindromo("neuquen")     # Devuelve: True ✅
esPalindromo("palindromo")  # Devuelve: False ❌
esPalindromo("reconocer")   # Devuelve: True ✅
esPalindromo("hola")        # Devuelve: False ❌
```

## 🔧 Lógica paso a paso

A continuación, explicamos el funcionamiento de la función recursiva `esPalindromoRec` en lenguaje **C**, que determina si una cadena es un palíndromo. Esta función se apoya en índices para recorrer la palabra desde los extremos hacia el centro.

### 🔹 1. Estructura general

La lógica está dividida en dos funciones:

- `esPalindromoRec`: función **recursiva** que compara caracteres desde los extremos.
- `esPalindromo`: función **interfaz**, pensada para ser llamada desde `main`. Calcula la longitud de la cadena y llama a la función recursiva con los índices inicial y final.

```c
bool esPalindromo(const char *cadena) {
    int longitud = strlen(cadena);
    return esPalindromoRec(cadena, 0, longitud - 1);
}
```


### 🔹 2. Caso base (condición de corte)

El **caso base** en una función recursiva es la condición que **detiene la recursión**, es decir, evita que la función se llame a sí misma infinitamente.

En esta función:

```c
if (inicio >= fin) {
    return true;
}
```

### 🔹 3. Comparar caracteres extremos

Antes de avanzar hacia el centro de la palabra, la función recursiva debe asegurarse de que los **caracteres en los extremos** coincidan.

Este paso se realiza con la siguiente condición:

```c
if (cadena[inicio] != cadena[fin]) {
    return false;
}
```

### 🔹 4. Llamada recursiva

Una vez que verificamos que los **caracteres extremos coinciden**, la función no termina, sino que continúa comparando los caracteres más cercanos al centro.

Esto se logra llamando nuevamente a la misma función, pero **acercando los índices**:

```c
return esPalindromoRec(cadena, inicio + 1, fin - 1);
```
