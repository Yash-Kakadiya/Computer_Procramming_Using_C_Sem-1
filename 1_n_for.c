//Print 1 to n using for loop
#include<stdio.h>

void main(){
	int n,i;
	
	printf("Enter Number upto print :" );
	scanf("%d",&n);
	
	for(i=1;i<=n;i++){
		printf("%d\n",i);
	}
}
