#include<stdio.h>
void main(){
	int i=1,a,b,ans=1;
	
	printf("Enter Number : ");
	scanf("%d",&a);
	
	printf("Enter Power : ");
	scanf("%d",&b);
	
	while(i<=b){
		ans=ans*a;
		i++;
	}
	printf("Square of %d is %d",a,ans);
}
