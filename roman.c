#include<stdio.h>
void main(){
	int i=1,n;
	
	printf("Enter Decimal Number : ");
	scanf("%d",&n);
	
	while(n>=1){
		if(n>=1000){
			printf("M");
			n-=1000;
		}
		if(n>=900&&n<1000){
			printf("CM");
			n-=900;
		}
		if(n>=500&&n<900){
			printf("D");
			n-=500;
		}
		if(n>=400&&n<500){
			printf("CD");
			n-=400;
		}
		if(n>=100&&n<400){
			printf("C");
			n-=100;
		}
		if(n>=90&&n<100){
			printf("XC");
			n-=90;
		}
		if(n>=50&&n<90){
			printf("L");
			n-=50;
		}
		if(n>=40&&n<50){
			printf("XL");
			n-=40;
		}
		if(n>=10&&n<40){
			printf("X");
			n-=10;
		}
		if(n>=9&&n<10){
			printf("IX");
			n-=9;
		}
		if(n>=8&&n<9){
			printf("VIII");
			n-=8;
		}
		if(n>=7&&n<8){
			printf("VII");
			n-=7;
		}
		if(n>=6&&n<7){
			printf("VI");
			n-=6;
		}
		if(n>=5&&n<6){
			printf("V");
			n-=5;
		}
		if(n>=4&&n<5){
			printf("IV");
			n-=4;
		}if(n>=3&&n<4){
			printf("III");
			n-=3;
		}
		if(n>=2&&n<3){
			printf("II");
			n-=2;
		}
		if(n>=1&&n<2){
			printf("I");
			n-=1;
		}
	}
}
