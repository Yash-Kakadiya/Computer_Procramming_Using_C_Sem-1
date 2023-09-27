#include<stdio.h>
void main(){
	int r,c,n;
	printf("Enter Ending value for row : ");
	scanf("%d",&n);
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			if((r+c)%2==0){
				printf("1");
			}
			else{
				printf("0");
			}
			
		}
		printf("\n");
	}
}
