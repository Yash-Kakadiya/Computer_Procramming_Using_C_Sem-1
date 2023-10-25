#include<stdio.h>
void main(){
	int a,b,*ptr_a,*ptr_b,temp;
	printf("Enter a Number : ");
	scanf("%d",&a);
	printf("Enter another Number : ");
	scanf("%d",&b);
	
	ptr_a=&a;
	ptr_b=&b;
	
	printf("----------------------------------------\n");
	printf("Before Swapping\n");
	printf("Value of a : %d\n",*ptr_a);
	printf("Value of b : %d\n",*ptr_b);
	printf("----------------------------------------\n");
	
	temp=ptr_a;
	ptr_a=ptr_b;
	ptr_b=temp;

	printf("After Swapping\n");
	printf("Value of a : %d\n",*ptr_a);
	printf("Value of b : %d\n",*ptr_b);
	printf("----------------------------------------\n");
}
