#include <stdio.h>
int main (){
    int num, i, resultado;
   //printf("Loop para impressão de números pares.\n");
   //printf("Digite o número inicial.(Número min:1 Número max:100)\n");
   // scanf("%d",&num);
   //while normal lógica testada
   /* while (num <= 100  )
    {
        if(num % 2 ==0 par)(num !=0 impar){
        printf("Num: %d\n",num);
        }
        num++;
    }*/
   // do while 
  /* do
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
   printf("Saindo do programa....!\n");*/
   //for teste !
   printf("Digite o númer do qual você deseja a tabuada de zero a dez!\n");
   scanf("%d",&num);
 
   for (i = 0; i <=10; i++)
   {
    printf("%d x %d = %d\n", i, num, i * num);
   }
   
    return 0;
}