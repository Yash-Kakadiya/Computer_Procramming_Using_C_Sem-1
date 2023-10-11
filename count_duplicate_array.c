#include<stdio.h>

void main(){
	int i,j,size,count=0;
	
	printf("How many Numbers You will Enter : ");
	scanf("%d",&size);
	
	int arr[size];
	
	for(i=0;i<size;i++){
	printf("Enter Number : ");
	scanf("%d",&arr[i]);
	}
	
	for(i=0;i<size;i++){
		for(j=i+1;j<size;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
	}
	printf("Count of Duplicate Numbers : ");
		printf("%d\n",count);
}
