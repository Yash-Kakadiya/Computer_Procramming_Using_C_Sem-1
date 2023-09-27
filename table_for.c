#include<stdio.h>
void main(){
	int i,n;
	
	printf("Enter Number For its Table : ");
	scanf("%d",&n);
	
	for(i=1;i<=10;i++){
		
		printf("%d X %d = %d\n",n,i,(n*i));

	}
}
