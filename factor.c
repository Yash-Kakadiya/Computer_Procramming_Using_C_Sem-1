#include<stdio.h>
void main(){
	int i=1,n;
	
	printf("Enter Number For its Factors: ");
	scanf("%d",&n);
	
	printf("Factors Are : \n");
	while(i<=n){
		if(n%i==0){
			printf("%d\n",i);
		}
		i++;
	}

}
