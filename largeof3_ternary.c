#include<stdio.h>

void main(){
	int a,b,c,large;
	printf("Enter Value of a : ");
	scanf("%d",&a);
	printf("Enter Value of b : ");
	scanf("%d",&b);
	printf("Enter Value of c : ");
	scanf("%d",&c);
	
	large=((a>b)?((a>c)?a:c):((b>c)?b:c));
	 
	 printf("largest is %d",large);
	

}
