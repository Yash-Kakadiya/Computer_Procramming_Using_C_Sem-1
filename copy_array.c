#include<stdio.h>
void main(){
	int n,i;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int a[n],b[n];
	

	for(i=0;i<n;i++){
	printf("Enter Number : ");
	scanf("%d",&a[i]);
	b[i]=a[i];
	}
	printf("-------------------------------------\n");
	printf("Copy of Array is \n");
	for(i=0;i<n;i++){
		printf("%d\n",b[i]);
	}
}
