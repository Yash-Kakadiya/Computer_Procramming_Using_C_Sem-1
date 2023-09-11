#include <stdio.h>

void main(){
    int a, b,temp;

    printf("Enter any number a : ");
    scanf("%d",&a);
    printf("Enter any number b : ");
    scanf("%d",&b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("Swaped Numbers : a=%d and b=%d",a,b);

}