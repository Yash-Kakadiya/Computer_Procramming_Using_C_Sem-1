#include<stdio.h>
#include<string.h>

void main(){
	char s1[100],c;
	
	printf("Enter String 1 : ");
	gets(s1);
	printf("Enter char you want to find : ");
	scanf("%c",&c);
	
	int res=strchr(s1,c);
	
	if(res==0){
		printf("Character Not Found");
	}
	else{
		printf("Character Found");
	}
}

