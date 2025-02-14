#include <stdio.h>
int main() {
    int num, num2;
    char letra;
    for ( num = 1; num <= 10; num++)
    {
        letra = 'A';
       for(num2 = 1; num2 <= num; num2++)
       {
         printf("%c ",letra);
         ++letra;
       }
       printf("\n");
    }
    
    return 0;
}