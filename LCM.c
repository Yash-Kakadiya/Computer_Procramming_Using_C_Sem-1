#include<stdio.h>

void main(){
    int a,b,i,lcm=1,hcf=1,x,y;

    printf("Enter value :");
    scanf("%d",&a);
    printf("Enter another value :");
    scanf("%d",&b);
    x=a;
    y=b;
    
     while(b!=0){
        i=b;
        b=a%b;
        a=i;
    }
    hcf=a;
    lcm=x*y/hcf;
    printf("LCM = %d\n",lcm);
}