#include <stdio.h>

int main() {
    int a = 0, b = 0 , c = 0;

    while (1) {
        printf("enter a number : ");
        scanf("%d", &a);
        if (a <= 0) {
            break;
            
        }
        
        b += a;
        c++;
    }

    if (c > 0) {
        float av= b / c;
        printf("Sum : %d\n", b);
        printf("Average : %.2f\n", av);
        
    }
    return 0;
}

