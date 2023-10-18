#include<stdio.h>

void main(){
	int i,j,k,size;
	
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
				for(k=j;k<size-1;k++){
					arr[k]=arr[k+1];
				}
				size--;
				j--;
			}
		}
	}
	printf("Array after deletation of duplicate numbers\n");
	for(i=0;i<size;i++){
		printf("%d\n",arr[i]);
	}
}
