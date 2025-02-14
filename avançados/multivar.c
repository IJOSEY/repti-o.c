#include <stdio.h>
 // incrementa "i" e decrementa "j" até se igualarem
int main() {
    //for com duas variaveis declradas internas na estrutur.
    for (int i = 0, j = 100; i <= j; i++, j--) {
        printf("i = %d, j = %d\n", i, j);
    }
    return 0;
}