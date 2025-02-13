#include <stdio.h>
int main () {
    int num,i;
    
   printf("Digite o númer do qual você deseja a tabuada de zero a dez!\n");
   scanf("%d",&num);
 
   for (i = 0; i <=10; i++)
   {
    printf("%d x %d = %d\n", i, num, i * num);
   }
    return 0;
}