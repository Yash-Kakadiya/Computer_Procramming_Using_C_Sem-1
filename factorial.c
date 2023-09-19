#include<stdio.h>
void main(){
	int i=1,n,ans=1;
	
	printf("Enter Number For Factorial: ");
	scanf("%d",&n);
	
	while(i<=n){
		ans=ans*i;
		i++;
	}
	printf("Factorial of %d is %d",n,ans);
}
