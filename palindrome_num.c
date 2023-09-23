#include<stdio.h>

void main(){
    int n,r,rev=0,x;
    printf("Enter a Number: ");
    scanf("%d",&n);
    x=n;
    while(n!=0){
        r=n%10;
        rev=rev*10+r;
        n=n/10;
    }
    n=x;
    if(rev==n){
        printf("Palindrome Number");
    }
    else{
        printf("Not a Palindrome Number");
    }
}