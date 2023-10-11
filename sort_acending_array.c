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
		for(j=i+1;j<n;j++){
			if(num[i]>num[j]){
				x=num[i];
				num[i]=num[j];
				num[j]=x;
			}
		}
	}
	printf("Numbers in Acending Order are \n");
	for(i=0;i<n;i++){
		printf("%d\n",num[i]);
	}
}
