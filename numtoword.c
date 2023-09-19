#include<stdio.h>
void main(){
	int i,l=0;
	char num[100];
	
	
	printf("Enter Decimal Number :");
	scanf("%s",&num);
	
	while(num[l]!='\0'){
		l++;
	}
	i=l-1;
	while(i>=0){
		switch(num[i]){
			case '1':printf("One ");
			case '2':printf("Two ");
			case '3':printf("Three ");
			case '4':printf("Four ");
			case '5':printf("Five ");
			case '6':printf("Six ");
			case '7':printf("Seven ");
			case '8':printf("Eight ");
			case '9':printf("Nine ");
		}
	}
}
