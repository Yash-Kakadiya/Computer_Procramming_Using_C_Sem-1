#include<stdio.h>
#include<string.h>

void main(){
	char s1[100],c1,c2;
	
	printf("Enter String 1 : ");
	gets(s1);
	printf("Enter char you want to replace : ");
	scanf("%c",&c1);
	printf("Enter char you want to replace with : ");
	scanf(" %c",&c2);
	
	int res=strchr(s1,c1);
	
	if(res==0){
		printf("Character Not Found");
	}
	else{
		int i;
		for(i=0;i<strlen(s1);i++){
			if(s1[i]==c1){
				s1[i]=c2;
			}
		}
	}
	printf("String after Replacing\n");
	puts(s1);
}

