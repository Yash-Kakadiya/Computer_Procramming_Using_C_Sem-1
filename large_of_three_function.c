#include <stdio.h>

int large(int a,int b,int c){
	if(a>b){
        if(a>c){
            return a;
        }
    }
    else if(b>c){
        return b;
    }
    else{
        return c;
    }
}

void main(){
    int a,b,c;

    printf("Enter any number a : ");
    scanf("%d",&a);
    printf("Enter any number b : ");
    scanf("%d",&b);
    printf("Enter any number c : ");
    scanf("%d",&c);
    
    int res=large(a,b,c);
    
    printf("Largest of three  Numbers : %d",res);
}
