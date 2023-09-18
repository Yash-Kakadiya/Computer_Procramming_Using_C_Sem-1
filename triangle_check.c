#include<stdio.h>
void main(){
    int a,b,c;

    printf("Enter length of side a : ");
    scanf("%d",&a);
    printf("Enter length of side b : ");
    scanf("%d",&b);
    printf("Enter length of side c : ");
    scanf("%d",&c);
    if(a==b&&b==c&&a==c){
        printf("Equilateral Trigle");
    }
    else if(a==b||b==c||a==c){
        printf("Isosceles Triangle");
    }
    else if((a*a)==(b*b)+(c*c)||(b*b)==(a*a)+(c*c)||(c*c)==(b*b)+(a*a)){
        printf("Right Angled Triangle");
    }
    else{
        printf("Scalene Triangle");
    }
}