#include <stdio.h>
int main (){
    int num;
    printf("Loop para impressão de números pares.\n");
   printf("Digite o número inicial.(Número min:1 Número max:100)\n");
   scanf("%d",&num);
   //while normal lógica testada
    while (num <= 100  )
    {
        if(num % 2 ==0 ){
        printf("Num: %d\n é par.",num);
        }else {
            printf("Num: %d\n é impar.",num);
        }
        num++;
    } 
   return 0;
}