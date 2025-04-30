## 🔧 Lógica paso a paso

### 🔹 1. Estructura general

El algoritmo utiliza una función recursiva llamada `producto` que toma dos enteros `m` y `n`:

```c
int producto(int m, int n) {
    if(n == 0) {
        return 0; // Caso base
    }
    return m + producto(m, n - 1); // Recursión
}
```

La idea es **sumar** `m` **un total de** `n` **veces** usando recursividad.

### 🔹 2. Caso base (condición de corte)

El **caso base** en cuando `n` vale `0`. Segun la propiedad matematica:

```nginx
m * 0 = 0 (para cualquier m)
```

Entonces, si `n` es `0`, se retorna `0` sin hacer mas llamadas: 

```c
if (n == 0) {
    return 0;
}
```

### 🔹 3. Llamada recursiva

Si `n` es distinto de 0, la función se llama nuevamente a sí misma, reduciendo `n` en 1, y sumando `m` a ese resultado:

```c
return m + producto(m, n - 1);
```

En cada llamada recursiva, se **acerca** `n` **al caso base** y acumula el valor de `m` en cada paso.

### 🔁 Ejemplo paso a paso: `producto(5, 3)`

```c
producto(5, 3)
→ 5 + producto(5, 2)
→ 5 + (5 + producto(5, 1))
→ 5 + (5 + (5 + producto(5, 0)))
→ 5 + 5 + 5 + 0
→ 15
```
Cada nivel de la recursión suma un `5` hasta llegar a `n = 0`.

### 🧪 Código de prueba `(main)`

```c
int main() {
    printf("producto(5, 3) = %d\n", producto(5, 3));
    printf("producto(10, 4) = %d\n", producto(10, 4));
    return 0;
}
```
Salida esperada:

```
producto(5, 3) = 15
producto(10, 4) = 40
```