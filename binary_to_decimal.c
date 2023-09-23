#include<stdio.h>
void main(){
    int d=0,b,r,i=1;
    printf("Enter Binary Number : ");
    scanf("%d",&b);
    
    while(b!=0){
        r=b%10;
        d=d+r*i;
        b=b/10;
        i=i*2;
    }
    printf("Decimal is : %d",d);
}