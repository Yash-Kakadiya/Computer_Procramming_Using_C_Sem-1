#include<stdio.h>

void main(){
	int n,sum=0,i;
	
	printf("Enter Number upto which you want to sum :" );
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		sum+=i;
	}
	printf("Sum Is : %d",sum);
}
