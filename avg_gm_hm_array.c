#include<stdio.h>
#include<math.h>
void main(){
	int i,n,sum=0,count=0,mul=1;
	float avg,gm,hm;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];
	

	for(i=0;i<n;i++){
		
	printf("Enter Number : ");
	scanf("%d",&num[i]);

	sum=sum+num[i];
	mul=mul*num[i];
	}
	
	avg=sum/(float)n;
	
	gm=pow(mul,(1/(float)n));
	
	hm=(pow(gm,n))/avg;
	
	printf("Average : %f\n",avg);
	printf("Geometric Mean : %f\n",gm);
	printf("Harmonic Mean : %f\n",hm);
}
