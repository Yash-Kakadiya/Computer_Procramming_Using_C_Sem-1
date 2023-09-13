#include<stdio.h>

void main(){
	int a,b,c;
    printf("Enter 1 For Addtion \n");
    printf("Enter 2 For Substraction \n");
    printf("Enter 3 For Multiplication \n");
    printf("Enter 4 For Division \n");
    printf("Enter 5 For Modulo \n");
	printf("Enter value : ");
	scanf("%d",&a);
    printf("Enter number for number Mathematical calculation : ");
	    scanf(" %d",&c);
	while(c!=0){
         printf("Enter next value : ");
	        scanf("%d",&b);
        switch(c){
		case 1:
        a=(a+b);
			printf("Answer = %d\n",(a));
			break;
		case 2:
			a=(a-b);
			printf("Answer = %d\n",(a));
			break;
		case 3:
			a=(a*b);
			printf("Answer = %d\n",(a));
			break;
		case 4:
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
		case 5:	
			a=(a%b);
			printf("Answer = %d\n",(a));
			break;
		default:
             c=0;
			printf("Invalid Number Mathematical calculation");
			break;
	}
    if(c!=0){
    printf("Enter number for Mathematical calculation : ");
	    scanf(" %d",&c);
    }
    }
	
}