#include <stdio.h>

void main(){
    int a, b, c;
    float ans;

    printf("Enter any number : ");
    scanf("%d",&a);
    printf("Enter any number : ");
    scanf("%d",&b);
    printf("Enter any number : ");
    scanf("%d",&c);

    ans=(a+b+c)/3.0;
    printf("Average Of Both Numbers : %f",ans);

}