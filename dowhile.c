#include <stdio.h>
int main(){
    int num;
    printf("Digite valor inicial do loop.\n");
    scanf("%d",&num);
    do
    {
        printf("num: %d\n",num);
        num++;
   
    } while (num <= 100);
    
       
    return 0;
}