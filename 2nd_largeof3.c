#include<stdio.h>
void main(){
    int a,b,c;

    printf("Enter number : ");
    scanf("%d",&a);
    printf("Enter number : ");
    scanf("%d",&b);
    printf("Enter number : ");
    scanf("%d",&c);
    if((a>b)&&(a<c)||(a<b)&&(a>c)){
        printf("Second Large Is %d",a);
    }
    else if((b>a)&&(b<c)||(b<a)&&(b>c)){
        printf("Second Large Is %d",b);
    }
    else{
        printf("Second Large Is %d",c);
    }
}