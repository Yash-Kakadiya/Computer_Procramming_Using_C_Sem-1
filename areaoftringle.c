#include <stdio.h>

void main(){
    int b, h;
    float ans;

    printf("Enter base : ");
    scanf("%d",&b);
    printf("Enter height : ");
    scanf("%d",&h);

    ans=1/2.0*b*h;

    printf("Area of Triangle : ");
    printf("%f",ans);
}