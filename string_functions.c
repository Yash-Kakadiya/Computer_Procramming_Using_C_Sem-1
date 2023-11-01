#include<stdio.h>
#include<string.h>

void main(){
	char s1[100],s2[100];
	
	printf("Enter String 1 : ");
	gets(s1);
	printf("Enter String 2 : ");
	gets(s2);
	
	printf("String Length of s1: %d\n",strlen(s1));
	printf("String Length of s2: %d\n",strlen(s2));
	
	printf("String Comparision : %d\n",strcmp(s1,s2));
	
	printf("String Copy : %s\n",strcpy(s1,s2));
	
	printf("String Concate : %s\n",strcat(s1,s2));
	
	printf("String 1 Reverse : %s\n",strrev(s1));
	printf("String 2 Reverse : %s\n",strrev(s2));

	printf("String 1 Lower Case : %s\n",strlwr(s1));	
	printf("String 2 Lower Case : %s\n",strlwr(s2));
	
	printf("String 1 Upper Case : %s\n",strupr(s1));	
	printf("String 2 Upper Case : %s\n",strupr(s2));
}

