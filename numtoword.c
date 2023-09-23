#include<stdio.h>
void main(){
	int i,l=0;
	char num[100];
	
	
	printf("Enter Decimal Number :");
	scanf("%s",&num);
	
	while(num[l]!='\0'){
		l++;
	}
    for(i=0;i<=l-1;i++){
		switch(num[i]){
			case '1':printf("One ");
			break;
			case '2':printf("Two ");
			break;
			case '3':printf("Three ");
			break;
			case '4':printf("Four ");
			break;
			case '5':printf("Five ");
			break;
			case '6':printf("Six ");
			case '7':printf("Seven ");
			break;
			case '8':printf("Eight ");
			break;
			case '9':printf("Nine ");
			break;
			default : printf("Zero ");
			break;
			i--;
		}
	}
}
