#include<stdio.h>

void main(){

    int n,i=2,flag=0;
    printf("Enter Number : ");
    scanf("%d",&n);

    while(i<=(n/2)){
        if(n%i==0){
            flag++;
            i++;
        }
        else{
            i++;
        }
    }
    if(flag==0){
        printf("Prime Number");
    }
    else{
        printf("Not Prime Number");
    }
}