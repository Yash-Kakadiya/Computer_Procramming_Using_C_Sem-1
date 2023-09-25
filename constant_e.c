#include<stdio.h>
void main(){
	int i,j=1,n;
	float sum=1,fac=1;
	printf("Enter Number upto which you want to find e : ");
	scanf("%d",&n);
    for(i=1;i<=n;i++){
        fac=1;
        for(j=1;j<=i;j++){
		fac=fac*j;
	    }
        sum=sum+(1/fac);
    }
	
	printf("Value of e upto %d! = %f",n,sum);
}