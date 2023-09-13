#include<stdio.h>

void main(){
	int n,i;
	
	printf("Enter Number From Which You Want to Start :" );
	scanf("%d",&i);
	printf("Enter Number which you want to End :" );
	scanf("%d",&n);
	
	printf("Numbers Divisible by 2 are \n");
	while(i<=n){
		if(i%2==0){
			printf("%d\n",i);
		}
		i++;
	}
}
