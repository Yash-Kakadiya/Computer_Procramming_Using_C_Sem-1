#include<stdio.h>
void main(){
	int i,n,count=0;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];
	

	for(i=0;i<n;i++){	
		printf("Enter Number : ");
		scanf("%d",&num[i]);
		if(num[i]%3==0){
			count++;
	 	}
	}	
	printf("Count of Numbers Divisible by 3 : %d\n",count);
}
