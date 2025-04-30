// Generar un algoritmo recursivo que calcule el k-ésimo número de la serie de Fibonacci. 
// Ejemplos: 
// terminoSeridFibonacci (1) => 1 
// terminoSeridFibonacci (5) => 8

// Con los dos primeros valores 
// 𝐹 ( 0 ) = 0 
// 𝐹 ( 1 ) = 1
// A partir de ahí, cada término se calcula sumando los dos anteriores: 
// 𝐹 ( 2 ) = 𝐹 ( 1 ) + 𝐹 ( 0 ) = 1 + 0 = 1 
// 𝐹 ( 3 ) = 𝐹 ( 2 ) + 𝐹 ( 1 ) = 1 + 1 = 2 
// 𝐹 ( 4 ) = 𝐹 ( 3 ) + 𝐹 ( 2 ) = 2 + 1 = 3 
// f 5 = f 4 + f 3 = 3+2=5

// Formula de fibonacci: 
// F (n) = F (n-1) + F (n-2)

#include <stdio.h>
#include <string.h>

int terminoSerieFibonacci(int n){
    //Caso base
    if(n == 1 || n == 2){
        return 1;
    }else{
        //Llamar a la recursividad
        return terminoSerieFibonacci(n-1) + terminoSerieFibonacci(n-2);
    }
}

int main(){
    int n = 1;
    printf("Fibonacci(%d) = %d\n", n, terminoSerieFibonacci(n)); // Salida: 1

    n = 5;
    printf("Fibonacci(%d) = %d\n", n, terminoSerieFibonacci(n)); // Salida: 5

    n = 6;
    printf("Fibonacci(%d) = %d\n", n, terminoSerieFibonacci(n)); // Salida: 8

    return 0;
}