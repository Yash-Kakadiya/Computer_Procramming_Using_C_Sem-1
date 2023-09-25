#include<stdio.h>
void main(){
    int b,p,i,a,x,y,ans=0;
    printf("Enter Base : ");
    scanf("%d",&b);
    printf("Enter Power : ");
    scanf("%d",&p);
    x=b;
    ans=b;
    if(p!=0){
    for(i=1;i<=p-1;i++){

        for(y=1;y<x;y++){
            ans=ans+b;
        }
        b=ans;
    }
    }
    else{
        ans=1;
    }
    printf("%d^%d=%d",x,p,ans);
}