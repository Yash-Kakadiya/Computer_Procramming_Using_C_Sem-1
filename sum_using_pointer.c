#include<stdio.h>
void main(){
	int a,b,*ptr_a,*ptr_b,sum;
	printf("Enter a Number : ");
	scanf("%d",&a);
	printf("Enter another Number : ");
	scanf("%d",&b);
	
	ptr_a=&a;
	ptr_b=&b;
	sum=(*ptr_a)+(*ptr_b);

	printf("Sum : %d",sum);
}
