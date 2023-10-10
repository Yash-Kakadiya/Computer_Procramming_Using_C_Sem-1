#include<stdio.h>

void main(){
	
    char s[100];
    int l=0,i;
    printf("Don't Use Space\n");
    printf("Enter a word : ");
    scanf("%s",&s);

    while(s[l]!='\0'){ //   '\0' because null char ='\0'
        l++;
    }
	
	printf("Length of String is : %d\n",l);
    printf("Sring : ");
    for(i=0;i<l;i++){
    	printf("%c",s[i]);
	}
	
}
