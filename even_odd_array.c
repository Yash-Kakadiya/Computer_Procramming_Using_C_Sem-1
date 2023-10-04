#include<stdio.h>
void main(){
	int i,n,odd=0,even=0;
	
	printf("How Many Numbers you will Enter : ");
	scanf("%d",&n);
	
	int num[n];
	

	for(i=0;i<n;i++){
		
	printf("Enter Number : ");
	scanf("%d",&num[i]);
	if(num[i]%2==1){
		odd++;
		}
	else if(num[i]%2==0){
		even++;
	 	}
	}
	
	printf("Total Odd Numbers : %d\n",odd);
	printf("Total Even Numbers : %d\n",even);
}
