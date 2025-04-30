// Construir una función recursiva que retorne verdadero si una cadena de caracteres 
// pasada como parámetro es un palíndromo.  Ej. “neuquen” ya que se lee igual de atrás 
// hacia adelante. 
// Ejemplos: 
// palindromo(“neuquen”) => verdadero 
// palindromo(“palindromo”) => falso

#include <stdio.h>
#include <string.h>
#include <stdbool.h>s

bool esPalindromoRec(const char *cadena, int inicio, int fin){
    if(inicio >= fin){
        return true; 
        //Caso base
    }
    if(cadena[inicio] != cadena[fin]){
        return false;
        //Si no coinciden los caracteres 
    }
    return  esPalindromoRec(cadena,inicio+1,fin-1);
    //Llamada recursiva
}

//Funcion que va ser llamada en Main
bool esPalindromo(const char  *cadena){
    int longitud = strlen(cadena);
    return esPalindromoRec(cadena, 0, longitud-1);
}

int main(){
    const char *palabra1 = "neuquen";
    const char *palabra2 = "reconocer";
    const char *palabra3 = "male";

    printf("%s => %s\n", palabra1, esPalindromo(palabra1) ? "verdadero" : "falso");
    printf("%s => %s\n", palabra2, esPalindromo(palabra2) ? "verdadero" : "falso");
    printf("%s => %s\n", palabra3, esPalindromo(palabra3) ? "verdadero" : "falso");

    return 0;
}

