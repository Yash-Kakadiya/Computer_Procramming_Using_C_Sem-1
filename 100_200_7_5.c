#include<stdio.h>

void main(){
	int n=200,i=101;
	
	printf("Numbers Divesible by 7 but Not by 5 are \n");
	while(i<n){
		if(i%7==0&i%5!=0){
			printf("%d\n",i);
		}
		i++;
	}
}
