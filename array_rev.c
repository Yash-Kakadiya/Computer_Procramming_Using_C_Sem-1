#include<stdio.h>
void main(){
	int i,l=0;
	char num[10];
	printf("Enter Number : ");
	scanf("%s",&num);
	
	while(num[l]!='\0'){
		l++;	
	}
	
	printf("Normal Number : ");
	
	for(i=0;i<=l-1;i++){
		printf("%c",num[i]);
			
	}
	
	printf("\n");
	printf("Reversed Number : ");
	
	for(i=l-1;i>=0;i--){
		printf("%c",num[i]);
	}
}
