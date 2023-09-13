#include<stdio.h>

void main(){
	int n,sum=0,i=1;
	
	printf("Enter Number upto which you want to sum in series 1 + 4 + 9 + 16 + 25 + 36 + …n^2:" );
	scanf("%d",&n);
	
	while(i<=n){
		sum+=(i*i);
		i++;
	}
	printf("Sum Is : %d",sum);
}
