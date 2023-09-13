#include<stdio.h>

void main(){
	int n,i=1;
	
	printf("Enter Number upto print square:" );
	scanf("%d",&n);
	
	while(i<=n){
		printf("Square of %d : %d\n",i,i*i);
		i++;
	}
}
