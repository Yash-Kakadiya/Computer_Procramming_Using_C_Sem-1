#include <stdio.h>

float ans(float p,float r,float n){
	return (p*r*n/(100*12));
}

void main(){
    float p, r, n;

    printf("Enter Principle Amount : ");
    scanf("%f",&p);
    printf("Enter Rate of Interest : ");
    scanf("%f",&r);
    printf("Enter Period of Time in Months : ");
    scanf("%f",&n);
    
    float res=ans(p,r,n);
    
    printf("Simple Interest : %f\n",res);
	printf("Total Amount To be Revieved  : %f",res+p);
}
