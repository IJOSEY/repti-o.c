#include <stdio.h>
int main(){
    int num;
    printf("Digite valor inicial do loop.\n");
    scanf("%d",&num);
    while (num <= 100)
    {
        printf("num: %d\n",num);
        num++;
    }
    
}