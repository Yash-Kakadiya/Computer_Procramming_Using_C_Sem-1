#include<stdio.h>

void main(){
	char c;

	printf("Enter Character : ");
	scanf(" %c",&c);

	
	if(c>='A' && c<='Z'){
		printf("UpperCase");
	}
	else if(c>='a' && c<='z'){
		printf("LowerCase");
	}
	else if(c>='0' && c<='9'){
		printf("Digit");
	}
	else{
		printf("Special Symbol");
	}
	
}
