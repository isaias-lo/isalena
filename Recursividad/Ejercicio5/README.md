# 🔢 Separador de Miles con Recursividad

Este ejercicio muestra cómo formatear un número largo en forma de cadena (`string`) insertando automáticamente puntos (`.`) como **separadores de miles**, por ejemplo:

- `"123456"` → `"123.456"`
- `"12345678"` → `"12.345.678"`

Lo interesante es que se resuelve usando **recursividad**, sin usar funciones de formato avanzadas ni estructuras auxiliares.

---

## ✅ Ejemplos esperados

```c
formatoConPuntos("123456");      // 123.456
formatoConPuntos("12345678");    // 12.345.678
formatoConPuntos("987");         // 987
formatoConPuntos("1234");        // 1.234
```

## 🔧 Lógica paso a paso

### 🔹 1. Caso base: Si la cadena tiene 3 o menos digitos

```c
if (len <= 3) {
    printf("%.*s", len, num);
    return;
}
```

📌 Si el numero tiene **3 o menos dígitos**, no necesita separador, se imprime directamente.

✳️ Ejemplo:
```c
num = "987", len = 3 → imprime: 987
```

### 🔹 2. Separación en bloques de tres (recursivo)
```c
agregarSeparadorMiles(num, len - 3);
printf(".%.*s", 3, num + len - 3);
```

📍 Acá se hace el formato de miles al estilo:
Separar desde la derecha cada 3 dígitos, e ir agregando puntos hacia la izquierda.

✅ El truco está en:

- Llamar recursivamente a la subcadena desde el inicio hasta len - 3
- Luego imprimir un punto (.)
- Después imprimir los últimos 3 dígitos
🔁 Esta operación se repite de forma recursiva, hasta llegar al caso base.

✳️ Ejemplo paso a paso:
```c
num = "12345678" (8 dígitos)

1. len = 8 → llama a agregarSeparadorMiles(num, 5)
2. len = 5 → llama a agregarSeparadorMiles(num, 2)
3. len = 2 → imprime: "12"
4. vuelve → imprime: ".345"
5. vuelve → imprime: ".678"

Resultado final: 12.345.678

```

### 🔹 3. Función auxiliar: `formatoConPuntos`

```c
void formatoConPuntos(const char* num) {
    int len = strlen(num);
    agregarSeparadorMiles(num, len);
    printf("\n");
}
```

✅ Esta función simplemente llama a la función recursiva y agrega el salto de línea (`\n`).
Sirve para hacer el código más limpio desde el `main`.

### 🧪 Código de prueba `(main)`

```c
int main() {
    formatoConPuntos("123456");      // 123.456
    formatoConPuntos("12345678");    // 12.345.678
    formatoConPuntos("987");         // 987
    formatoConPuntos("1234");        // 1.234
    return 0;
}
```
🖨️ Salida esperada:

```
123.456
12.345.678
987
1.234
```

