#include<stdio.h>
void main(){
    int ascii;
    printf("ASCII Values With Their Characters are :\n");
    for(ascii=0;ascii<=255;ascii++){
        printf("%d : ",ascii);
        printf("%c\n",ascii);
        printf("--------------------------------\n");
    }
}