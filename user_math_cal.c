#include<stdio.h>

void main(){
	int a,b;
    char c;
    // printf("Enter 1 For Addtion \n");
    // printf("Enter 2 For Substraction \n");
    // printf("Enter 3 For Multiplication \n");
    // printf("Enter 4 For Division \n");
    // printf("Enter 5 For Modulo \n");
	printf("Enter value : ");
	scanf("%d",&a);
    printf("Enter Arithmatic Sign : ");
	    scanf(" %c",&c);
	while(c!='0'){
         printf("Enter next value : ");
	        scanf("%d",&b);
        switch(c){
		case '+':
        a=(a+b);
			printf("Answer = %d\n",(a));
			break;
		case '-':
			a=(a-b);
			printf("Answer = %d\n",(a));
			break;
		case '*':
			a=(a*b);
			printf("Answer = %d\n",(a));
			break;
		case '/':
			if(b==0){
			printf("Not Defined\n");
            printf("Promgram Restart\n");
            printf("Enter value : ");
	        scanf("%d",&a);
		}
		    else{
			a=(a/b);
			printf("Answer = %d\n",(a));
		}
			break;
		case '%':	
			a=(a%b);
			printf("Answer = %d\n",(a));
			break;
		default:
             c='0';
			printf("Invalid Number Mathematical calculation");
			break;
	}
    if(c!=0){
    printf("Enter number for Mathematical calculation : ");
	    scanf(" %c",&c);
    }
    }
	
}