#include<stdio.h>

void main(){
    char w[100];
    int l=0,i;
    printf("Enter a word : ");
    scanf("%s",&w);

    while(w[l]!='\0'){ //   '\0' because null char ='\0'
        l++;
    }

    i=l-1;

    printf("Reversed word : ");
    while(i>=0){
        printf("%c",w[i]);
        i--;
    }
}
