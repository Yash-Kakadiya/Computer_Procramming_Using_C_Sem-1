#include<stdio.h>
void main(){
	int i,n,*ptr;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];
	
	for(i=0;i<n;i++){	
	printf("Enter Number : ");
	scanf("%d",&num[i]);
	}
	
	ptr=&num[0];
	
	for(i=0;i<n;i++){	
	printf("Number at num[%d] : %d\n",i,*ptr++);
	}
}
