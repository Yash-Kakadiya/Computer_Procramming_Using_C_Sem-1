#include<stdio.h>
void main(){
    int n,sum=0,avg=0,i=0;
        printf("Enter Zero to Exit\n");
        printf("Enter Number : ");
        scanf("%d",&n);
    while(n!=0){
        i++;
        sum=sum+n;
        printf("Enter Next Number : ");
        scanf("%d",&n);
    }
    avg=sum/i;
    printf("Sum = %d\n",sum);
    printf("Average = %d\n",avg);
}