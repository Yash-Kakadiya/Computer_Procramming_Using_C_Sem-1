#include<stdio.h>
void main(){
	int i,j,n,x;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];
	

	for(i=0;i<n;i++){
	printf("Enter Number : ");
	scanf("%d",&num[i]);
	}
	
	for(i=0;i<n-1;i++){
		for(j=0;j<n-i-1;j++){
			if(num[j]>num[j+1]){
				x=num[i];
				num[i]=num[i+1];
				num[i+1]=x;
			}
		}
	}
	printf("Numbers in Acending Order are \n");
	for(i=0;i<n;i++){
		printf("%d\n",num[i]);
	}
}
