#include<stdio.h>
void main(){
	int a;
	printf("Enter a Number : ");
	scanf("%d",&a);
	int *ptr;
	ptr=&a;
	printf("Value : %d\n",*ptr);
	printf("It's Address : %d",ptr);
}
