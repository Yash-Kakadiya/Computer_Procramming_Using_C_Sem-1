#include<stdio.h>
void main(){
	int i,n,sum=0,count=0;
	float avg;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];
	

	for(i=0;i<n;i++){
		
	printf("Enter Number : ");
	scanf("%d",&num[i]);

	sum=sum+num[i];
	}
	
	avg=sum/(float)n;
	
	for(i=1;i<n;i++){
		if(num[i]>avg){
			count++;
		}
	}
	
	printf("Average of Numbers : %f\n",avg);
	printf("Count of numbers higher than the average : %d\n",count);
}
