#include <stdio.h>

int sum(int a,int b){
	return a+b;
}

void main(){
    int a, b, res;
	
    printf("Enter any number a : ");
    scanf("%d",&a);
    printf("Enter any number b : ");
    scanf("%d",&b);
    
    res=sum(a,b);
    
    printf("Sum Of Both Numbers : %d",res);

}
