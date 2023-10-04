#include<stdio.h>
void main(){
	int i,n,max,min,sum=0;
	float avg;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];
	

	for(i=0;i<n;i++){
		
	printf("Enter Number : ");
	scanf("%d",&num[i]);

	sum=sum+num[i];
	}
	min=num[0];
	max=num[0];
	
	for(i=0;i<n-1;i++){
		if(max<=num[i+1]){
			max=num[i+1];
		}
		if(min>=num[i+1]){
			min=num[i+1];
		}
	}
	avg=sum/(float)n;
	
	printf("Maximum Number : %d\n",max);
	printf("Minimum Number : %d\n",min);
	printf("Sum of Numbers : %d\n",sum);
	printf("Average of Numbers : %f\n",avg);
}
