#include<stdio.h>

void main(){
	int a,b;
	char c;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter arithmetic sign  : ");
	scanf(" %c",&c);
	printf("Enter value of b : ");
	scanf("%d",&b);
	
	
	if(c=='+'){
		printf("Sum is : %d",(a+b));
	}
	else if(c=='-'){
		printf("Substraction is : %d",(a-b));
	}
	else if(c=='*'){
		printf("Multiplication is : %d",(a*b));
	}
	else if(c=='/'){
		if(b==0){
			printf("Not Defined");
		}
		printf("Division is : %d",(a/b));
	}
	else if(c=='%'){
		printf("Modulo is : %d",(a%b));
	}
	else {
		printf("Invalid Sign");
	}
}
