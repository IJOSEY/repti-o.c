#include <stdio.h>
 
int main() {
    for (int i = 0; i <= 20; i++) {
        if (i == 5) continue; // Pula a iteração quando 
        if (i == 2) break;    // Sai do loop quando 
        printf("%d ", i);
    }
    return 0;
}