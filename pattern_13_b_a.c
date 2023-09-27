#include<stdio.h>
void main(){
	int r,c,n,x=0;
	printf("Enter Ending value for row : ");
	scanf("%d",&n);
	for(r=1;r<=n;r++){
		for(c=1;c<=r;c++){
			printf("%d ",(x+=1));
		}
		printf("\n");
	}
}
