#include<stdio.h>

void main(){
    int a,b,hcf=1,i;

    printf("Enter value :");
    scanf("%d",&a);
    printf("Enter another value :");
    scanf("%d",&b);

    while(b!=0){
        i=b;
        b=a%b;
        a=i;
    }
    hcf=a;
    printf("HCF = %d\n",hcf);
}