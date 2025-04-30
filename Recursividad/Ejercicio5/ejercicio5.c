// Generar un algoritmo recursivo que le ponga los “.” de los miles a un String de 
// números. 
// Ejemplos: 
// agregarSeparadorMiles (“123456”) => “123.456” 
// agregarSeparadorMiles (“12345678”) => “12.345.678” 

#include <stdio.h>
#include <string.h>

// Función recursiva corregida con dos parámetros
void agregarSeparadorMiles(const char* num, int len) {
    if (len <= 3) {
        // Imprime directamente los primeros caracteres
        printf("%.*s", len, num);
        return;
    }

    // Llamada recursiva sobre la parte izquierda
    agregarSeparadorMiles(num, len - 3);

    // Imprime el separador y los últimos 3 dígitos
    printf(".%.*s", 3, num + len - 3);
}

// Versión auxiliar para evitar que el main tenga que pasar la longitud
void formatoConPuntos(const char* num) {
    int len = strlen(num);
    agregarSeparadorMiles(num, len);
    printf("\n");
}

int main() {
    formatoConPuntos("123456");      // 123.456
    formatoConPuntos("12345678");    // 12.345.678
    formatoConPuntos("987");         // 987
    formatoConPuntos("1234");        // 1.234
    return 0;
}

