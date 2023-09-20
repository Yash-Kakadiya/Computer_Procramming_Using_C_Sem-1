#include<stdio.h>
void main(){
    int a,b,ans;
    printf("Enter any value :");
    scanf("%d",&a);
    printf("Enter any value :");
    scanf("%d",&b);
    ans=(a^b?printf("Both Are Unequal"):printf("Both Are Equal"));
}