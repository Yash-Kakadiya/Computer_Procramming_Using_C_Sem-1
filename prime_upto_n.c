#include<stdio.h>

void main(){

    int n,i=2,x=0;
    printf("Enter Number : ");
    scanf("%d",&n);
    for(int j=1;j<=n;j++){
        while(i<=(j/2)){
        if(j%i==0){
            x=1;
            break;
        }
       i++;
    }
    if(x==0){
        printf("%d\n",j);
    }
    else{
        x=0;
    }
    i=2;
    }
}