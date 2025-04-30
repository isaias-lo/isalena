# 🌀 Serie de Fibonacci con Recursividad

Este algoritmo en C para calcular el **k-ésimo término** de la Serie de Fibonacci usando **recursividad**.

---

## 📚 ¿Qué es la Serie de Fibonacci?

La **Serie de Fibonacci** es una secuencia de números en la que cada término es la **suma de los dos anteriores**. Los primeros términos de la serie son:

```
1, 1, 2, 3, 5, 8, 13, 21, 34, ...
```

### 🔢 Fórmula matemática:
 
```math
F(k) = F(k - 1) + F(k - 2)
```

## 🔧 Lógica paso a paso

### 🔹 1. Estructura general

El algoritmo se basa en llamar la misma función con valores más pequeños, siguiendo la fórmula de Fibonacci:

```c
int terminoSerieFibonacci(int n){
    if(n == 1 || n == 2){ //Caso base
        return 1;
    }else{
        //La recursion
        return terminoSerieFibonacci(n-1) + terminoSerieFibonacci(n-2);
    }
}
```

### 🔹 2. Caso base

```c
if(n == 1 || n == 2){
    return 1;
}
```

📌 Cuando el valor de `k` es `1` o `2`, se retorna `1` directamente, porque son los primeros términos de la serie.

Estos casos base son esenciales para que la recursión se detenga. Sin ellos, el programa entraría en un bucle infinito de llamadas recursivas.

### 🔹 3. Llamada recursiva

```c
return terminoSerieFibonacci(n-1) + terminoSerieFibonacci(n-2);
```
Cada llamada **divide el problema en dos más pequeños**:

- Calcula el término anterior `(k-1)`

- Calcula el término anterior a ese `(k-2)`

- Suma ambos resultados

🔁 Así, el algoritmo se va descomponiendo hasta llegar a los casos base (1 y 2), y desde ahí se van resolviendo todas las llamadas pendientes.

### 🔁 Ejemplo paso a paso: `terminoSerieFibonacci(5)`

```c
terminoSerieFibonacci(5)
→ terminoSerieFibonacci(4) + terminoSerieFibonacci(3)
→ (terminoSerieFibonacci(3) + terminoSerieFibonacci(2)) + (terminoSerieFibonacci(2) + terminoSerieFibonacci(1))
→ ((2 + 1) + (1 + 1)) → 3 + 2 → 5
```

✔ Resultado final: `5`

### 🧪 Código de prueba `(main)`

```c
int main() {
    int n = 1;
    printf("Fibonacci(%d) = %d\n", k, terminoSerieFibonacci(k)); // Salida: 1

    k = 5;
    printf("Fibonacci(%d) = %d\n", k, terminoSerieFibonacci(k)); // Salida: 5

    k = 6;
    printf("Fibonacci(%d) = %d\n", k, terminoSerieFibonacci(k)); // Salida: 8

    return 0;
}

```
Salida esperada:

```
Fibonacci(1) = 1
Fibonacci(5) = 5
Fibonacci(6) = 8
```
