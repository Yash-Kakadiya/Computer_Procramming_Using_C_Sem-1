#include<stdio.h>
void main(){
	int i,count=0;
	float h[5],w[5];
	
	for(i=0;i<5;i++){
		printf("Enter Height of person %d : ",(i+1));
		scanf("%f",&h[i]);
		printf("Enter Weight of that person %d : ",(i+1));
		scanf("%f",&w[i]);
		printf("----------------------------------------------------------------\n");
		if(h[i]>170.00&&w[i]<50.00){
			count++;
		}
	}
	printf("Number of person having height greater than 170 and weight less than 50 : %d",count);
}
