#include<stdio.h>

void main(){
	char a,ans;
	printf("Enter Value of a : ");
	scanf("%c",&a);
	
	ans=(((a>='a' && a<='z')||(a>='A' && a<='Z'))?printf("Alphabet"):printf("Not Alphabet"));

}
