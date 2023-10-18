//Print 1 to n using while and do while loop
#include<stdio.h>

void main(){
	int n,i=1;
	
	printf("Enter Number upto print :" );
	scanf("%d",&n);
	
	while(i<=n){
		printf("%d\n",i);
		i++;
	}
}
