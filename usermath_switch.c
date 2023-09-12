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
	
	
	switch(c){
		case '+':
			printf("Sum is : %d",(a+b));
			break;
		case '-':
			printf("Substraction is : %d",(a-b));
			break;
		case '*':
			printf("Multiplication is : %d",(a*b));
			break;
		case '/':
			if(b==0){
			printf("Not Defined");
		}
		else{
			printf("Division is : %d",(a/b));
		}
			break;
		case '%':	
			printf("Modulo is : %d",(a%b));
			break;
		default:
			printf("Invalid Sign");
			break;
	}
		
}
