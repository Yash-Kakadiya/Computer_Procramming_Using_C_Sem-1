#include<stdio.h>
void main(){
    int d,b=0,r,i=1;
    printf("Enter Decimal Number : ");
    scanf("%d",&d);
    while(d!=0){
        r=d%2;
        b=b+r*i;
        d=d/2;
        i=i*10;
    }
    printf("Binary is : %d",b);
}