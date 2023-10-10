#include<stdio.h>
void main(){
	int i,n,c=0,ser;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];

	for(i=0;i<n;i++){	
		printf("Enter Number : ");
		scanf("%d",&num[i]);
	}
		
	printf("Enter Number you want to search : ");
	scanf("%d",&ser);
	
	for(i=0;i<n;i++){
		if(num[i]==ser){
			c++;
		}
	}
	printf("----------------------------------\n");
	printf("Number You searched is %d times in Array.",c);
}
