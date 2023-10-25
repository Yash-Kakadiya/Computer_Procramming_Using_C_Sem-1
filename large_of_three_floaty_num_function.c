#include <stdio.h>

float large(float a,float b,float c){
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
    float a,b,c;

    printf("Enter any number a : ");
    scanf("%f",&a);
    printf("Enter any number b : ");
    scanf("%f",&b);
    printf("Enter any number c : ");
    scanf("%f",&c);
    
    float res=large(a,b,c);
    
    printf("Largest of three  Numbers : %f",res);
}
