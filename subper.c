#include<stdio.h>

void main(){
	int sub1,sub2,sub3,sub4,sub5;
	float per;
	
	printf("Enter value of Subject1  : ");
	scanf("%d",&sub1);
	printf("Enter value of Subject2  : ");
	scanf("%d",&sub2);
	printf("Enter value of Subject3  : ");
	scanf("%d",&sub3);
	printf("Enter value of Subject4  : ");
	scanf("%d",&sub4);
	printf("Enter value of Subject5  : ");
	scanf("%d",&sub5);
	
	per=(sub1+sub2+sub3+sub4+sub5)/5.0;
	printf("Percentage : %f",per);
	printf("% \n");
	if(per<=35){
		printf("Fail");
	}
	else if(per>=36 && per<=45){
		printf("Pass Class");
	}
	else if(per>=45 && per<=60){
		printf("Second Class");
	}
	else if(per>=60 && per<=70){
		printf("First Class");
	}
	else{
		printf("OutStanding");
	}
}
