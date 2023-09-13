#include<stdio.h>
#include<math.h>

void main(){
	int n,i=1;
	
	printf("Enter Number upto which you want Squareroot :" );
	scanf("%d",&n); 
	
	while(i<=n){
		printf("Squareroot of %d : %f\n",i,sqrt(i) );
		//printf("%d\n",i);
		i++;
	}
}
