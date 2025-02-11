#include <stdio.h>
int main(){
    int num;
    printf("Digite o valor( maio que 0) inicial para o loop: \n");
    scanf("%d",&num);

    for (num == 1; num <= 20; num++)
    {
        printf("num: %d\n",num);
    }
    
    return 0;
}