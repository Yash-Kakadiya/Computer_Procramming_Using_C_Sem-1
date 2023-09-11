#include <stdio.h>

void main(){
    int a,b,c;

    printf("Enter any number a : ");
    scanf("%d",&a);
    printf("Enter any number b : ");
    scanf("%d",&b);
    printf("Enter any number c : ");
    scanf("%d",&c);
    if(a>b){
        if(a>c){
            printf("a is largest");
        }
    }
    else if(b>c){
        printf("b is largest");
    }
    else{
        printf("c is largest");
    }
    

}