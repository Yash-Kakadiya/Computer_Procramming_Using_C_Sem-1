#include<stdio.h>
void main(){

    int i,j,n,sum=0;
    
    printf("Enter Value for n : ");
    scanf("%d",&n);

    for(i=1;i<=n;i++){

        for(j=1;j<=i;j++){
            sum=sum+j;
        }
    }
    printf("sum=%d\n",sum);

}