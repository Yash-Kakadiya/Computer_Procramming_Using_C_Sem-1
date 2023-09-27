#include<stdio.h>
void main(){
	int i,n,ans=1;
	
	printf("Enter Number For Factorial: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		ans=ans*i;
	}
	printf("Factorial of %d is %d",n,ans);
}
