#include <stdio.h>
int main() {
    int num;
    do
   {
    printf("Digite um número par para sair do programa....\n");
    scanf("%d",&num);
    if (num % 2 == 0)
    {
       printf("%d é par!\n",num);
    } else
    {
       printf("%d é impar!\n",num);
    }
   } while (num % 2 != 0);
   printf("Saindo do programa....!\n");
    return 0;
}