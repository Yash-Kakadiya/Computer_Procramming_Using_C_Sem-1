#include<stdio.h>

void main(){
	int n,i=1,odd_count=0,even_count=0;
	
	while(i<=10){
		printf("Enter Numbers %d:",i );
		scanf("%d",&n);
		if(n%2==0){
			even_count++;
		}
		else{
			odd_count++;
		}
		i++;
	}
	printf("----------------------------------------------------\n");
	printf("Total Odd Numbers : %d\n",odd_count);
	printf("Total Even Numbers : %d\n",even_count);
	
}
