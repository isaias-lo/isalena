// Dados los números enteros m y n, construir una función recursiva que devuelva el 
// cociente de ambos, calculando el mismo mediante restas sucesivas. Se deberá tener 
// en cuenta que en el caso de que la división no sea exacta, se devolverán hasta 5 cifras 
// decimales (si es necesario).  
// Ejemplos: 
// division (10,2) => 5 
// division (22,3) => 7,33333

#include <stdio.h>

// Parte entera recursiva: cuenta cuántas veces cabe n en m
int cociente(int m, int n) {
    if (m < n) return 0;
    return 1 + cociente(m - n, n);
}

// Parte decimal recursiva: imprime hasta 5 cifras decimales
void decimales(int resto, int n, int count) {
    if (resto == 0 || count == 5) return;
    resto *= 10;
    int d = cociente(resto, n);
    printf("%d", d);
    decimales(resto - d * n, n, count + 1);
}

// Función principal de división
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

// Ejemplo de uso
int main() {
    division(10, 2);   // 5
    division(22, 3);   // 7,33333
    division(7, 5);    // 1,4
    division(1, 8);    // 0,125
    return 0;
}
