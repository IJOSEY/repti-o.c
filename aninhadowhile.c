#include <stdio.h>
int main(){
    int num;
    num =0;
   
    printf("tabuada de 0 á 10\n");
    while (num <= 10)
    {
        int num2;
        num2 =1;
        while (num2 <= 10)
        {
            printf("%d X %d = %d\n",num, num2, num *num2);
            num2++;
        }
        printf("\n");
        num++;
    }
    
    return 0;
}