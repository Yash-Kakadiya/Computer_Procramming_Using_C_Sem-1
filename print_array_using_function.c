#include<stdio.h>

void main(){
	int i,n;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){	
	printf("Enter Number at : arr[%d] : ",i);
	scanf("%d",&arr[i]);
	}
	array(n,arr);
	
}

void array(int n,int arr[]){
	
	printf("Printing Array : \n");
	int i;
	
	for(i=0;i<n;i++){	
	printf("%d\n",arr[i]);
	}
}

