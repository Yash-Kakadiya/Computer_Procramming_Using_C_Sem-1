#include <stdio.h>

void main() {
    int a;
    
    printf("Enter a number: ");
    scanf("%d", &a);

    printf("Original number: %d\n", a);
    printf("Multiplied by 2: %d\n", (a<<1));
    printf("Divided by 2: %d\n", (a>>1));
    
}