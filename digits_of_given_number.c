#include<stdio.h>

void main(){
    int n,l=0;
    printf("Enter Number : ");
    scanf("%d",&n);

    while(n!=0){
        l++;
        n=n/10;
    }
    printf("Given Number Has %d digits",l);
}