// Dados dos números enteros m y n, construir una función recursiva que devuelva el 
// producto de ambos, calculando el mismo como sumas sucesivas. Esto es: 
// m*n=m+m+...+m, n veces.  
// Ejemplos: 
// producto(5, 3) => 15 

int producto(int m, int n){
    if(n == 0){
        return 0; //Caso Base
    }

    return m + producto(m, n -1); //Recursivad (suma)
}

int main(){
    printf("producto(5,3) = %d\n", producto(5,3));
    printf("producto(10,4) = %d\n", producto(10,4));
    return 0;
}