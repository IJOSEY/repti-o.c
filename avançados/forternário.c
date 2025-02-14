#include <stdio.h>
 // imprime somente os números impares de 0 há 100.
int main() {
    /*invertendo o resultado final de ternário poderemos 
    imprimir somente pares tabem com mesmo código.*/
    for (int i = 0; i <= 100; i += (i % 2 == 0) ? 2 : 1) {
        printf("%d \n", i);
    }
    return 0;
}