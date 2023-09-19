#include<stdio.h>

void main(){
	float s,g,hra,da;
	
	printf("Enter value of  basic salary : ");
	scanf("%f",&s);


	if(s>=10000 && s<20000){
		hra=s*0.2;
		da=s*0.8;
		g=s+hra+da;
	}
	else if(s>=20000 && s<30000){
		hra=s*0.25;
		da=s*0.9;
		g=s+hra+da;
	}
	else if(s>=30000){
		hra=s*0.3;
		da=s*0.95;
		g=s+hra+da;
	}
	printf("Gross Salary :%f",g);
}

