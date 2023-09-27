#include<stdio.h>
void main(){
	int i,a,b,ans=1;
	
	printf("Enter Number : ");
	scanf("%d",&a);
	
	printf("Enter Power : ");
	scanf("%d",&b);
	
	for(i=1;i<=b;i++){
		ans=ans*a;
	}
	printf("%d ^ %d = %d",a,b,ans);
}
