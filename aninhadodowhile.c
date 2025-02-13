#include <stdio.h>
int main() {
    int num;
    printf("Tabuada digite o valor para iníco.\n");
    scanf("%d",&num);
    do
    {
        int num2;
        num2 =0;
        do
        {
            printf("%d X %d = %d\n",num, num2, num * num2);
            num2++;
        } while (num2 <= 10);
        printf("\n");
        num++;        
    } while (num <= 10);
    
    return 0;
}