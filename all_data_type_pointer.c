#include<stdio.h>
void main(){
	int i,*ptr_i;
	float f,*ptr_f;
	double d,*ptr_d;
	char ch,*ptr_ch;
	
	printf("Enter a Integer : ");
	scanf("%d",&i);
	
	printf("Enter a Floaty Number : ");
	scanf("%f",&f);
	
	printf("Enter a double type number : ");
	scanf("%lf",&d);
	
	printf("Enter a Character : ");
	scanf(" %c",&ch);
	
	printf("\n----------------------------------------\n");
	
	ptr_i=&i;
	ptr_f=&f;
	ptr_d=&d;
	ptr_ch=&ch;
	
	printf("Value of Integer: %d\n",*ptr_i);
	printf("It's Address : %d\n",ptr_i);
	printf("----------------------------------------\n");
	printf("Value of Floaty Number: %f\n",*ptr_f);
	printf("It's Address : %d\n",ptr_f);
	printf("----------------------------------------\n");
	printf("Value of Double Type Number : %lf\n",*ptr_d);
	printf("It's Address : %d\n",ptr_d);
	printf("----------------------------------------\n");
	printf("Value of Character: %c\n",*ptr_ch);
	printf("It's Address : %d\n",ptr_ch);
	printf("----------------------------------------\n");
}
