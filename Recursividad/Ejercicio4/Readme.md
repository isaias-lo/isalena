# ➗ División con Recursividad (Restas sucesivas + Decimales)

Este proyecto resuelve el problema de dividir dos números enteros `m` y `n` **sin usar el operador de división (`/`)**, utilizando **recursividad** y **restas sucesivas**, tanto para la **parte entera** como para los **decimales** (hasta 5 cifras).

---

## 📚 ¿Cómo funciona la división por restas sucesivas?

La división de `m / n` se puede ver como:
- ¿Cuántas veces cabe `n` dentro de `m`? → Esta es la **parte entera del cociente**
- ¿Cuál es el residuo? → Lo usamos para calcular los **decimales**

## 🔧 Lógica paso a paso

### 🔹 1. Parte entera: `cociente(m, n)`

```c
int cociente(int m, int n) {
    if (m < n) {
        return 0; //Caso base
    } 
    else{ 
        return 1 + cociente(m - n, n); //recursividad
    }
}
```

✅ Este cálculo funciona como:
- Restar `n` de `m` recursivamente
- Contar cuantas veces podemos hacerlo antes de que `m` sea menor que `n` 
- Ese contador es el resultado de `m / n` (parte entera)

📌 Ejemplo:
```c
cociente(22, 3) → 7
```

### 🔹 2. Parte decimal: `decimales(resto, n, count)`
```c
void decimales(int resto, int n, int count) {
    if (resto == 0 || count == 5) return;
    resto *= 10;
    int d = cociente(resto, n);
    printf("%d", d);
    decimales(resto - d * n, n, count + 1);
}
```
📍 Lógica:

- Multiplica el `resto` por 10 (como si agregáramos una coma)
- Calcula cuántas veces entra `n` en el nuevo número → primer decimal
- Repite hasta 5 veces o hasta que el resto sea 0

📌 Ejemplo:
```c
division(22, 3)
→ parte_entera = 7
→ resto = 1
→ decimales(1, 3) → 3, 3, 3, 3, 3 → imprime "33333"
```

### 🔹 3. Función principal: `division(m, n)`
```c
void division(int m, int n) {
    if (n == 0) {
        printf("Error: división por cero\n");
        return;
    }

    int parte_entera = cociente(m, n);
    int resto = m - parte_entera * n;

    printf("%d", parte_entera);

    if (resto > 0) {
        printf(",");
        decimales(resto, n, 0);
    }

    printf("\n");
}
```
✅ Combina ambas funciones:

- Calcula e imprime la parte entera
- Si hay resto, imprime coma y llama a `decimales`

🛑 Maneja división por cero con un mensaje de error.

### 🔁 Ejemplo paso a paso: `division(22, 3)`

```c
cociente(22, 3) → 7     // parte entera
resto = 22 - 3*7 = 1

→ decimales(1, 3)
1*10 = 10 → 10 / 3 = 3 → nuevo resto: 10 - 3*3 = 1
1*10 = 10 → 10 / 3 = 3 → ...
(repite 5 veces)

🖨️ Salida: 7,33333
```

### 🧪 Código de prueba `(main)`

```c
int main() {
    division(10, 2);   // 5
    division(22, 3);   // 7,33333
    division(7, 5);    // 1,4
    division(1, 8);    // 0,125
    return 0;
}
```
🖨️ Salida esperada:

```
5
7,33333
1,4
0,125
```