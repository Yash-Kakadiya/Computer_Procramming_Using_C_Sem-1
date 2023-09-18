#include<stdio.h>

void main(){

    int n,i=2;
    printf("Enter Number : ");
    scanf("%d",&n);

    while(i<=(n/2)){
        if(n%i==0){
            printf("Non Prime Number");
            i=-1;
            break;
        }
        else{
            i++;
        }
    }
    if(i!=-1){
        printf("Prime Number");
    }
}