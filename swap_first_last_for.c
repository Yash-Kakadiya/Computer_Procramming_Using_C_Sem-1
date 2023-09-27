#include<stdio.h>
#include<math.h>
void main(){
    int n,r,t,l=0,x,y;
    printf("Enter Number : ");
    scanf("%d",&n);
    x=n;
    for(;n!=0;){
        l++;
        n=n/10;
        
    }
    n=x;
    for(;n!=0;){
        r=n%10;
        n=n/(pow(10,l-1));
        t=r;
        r=n;
        y=t;
        break;
    }
    printf("Swaped : \n");
    printf("First digit : %d\n",y);
    printf("Last digit : %d\n",r);
}
