#include<stdio.h>

void main(){
	int n,sum=0,i=1;
	
	printf("Enter Number upto which you want to sum :" );
	scanf("%d",&n);
	
	while(i<=n){
		sum+=i;
		i++;
	}
	printf("Sum Is : %d",sum);
}
