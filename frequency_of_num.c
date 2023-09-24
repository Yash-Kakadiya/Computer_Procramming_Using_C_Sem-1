#include<stdio.h>

void main(){
    int i,l=0,zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    char num[100];
    printf("Enter a Number: ");
    scanf("%s",&num);

    while(num[l]!='\0'){
        l++;
    }

    for(i=0;i<=l-1;i++){
        switch(num[i]){
            case '1':one++;
            break;
            case '2':two++;
            break;
            case '3':three++;
            break;
            case '4':four++;
            break;
            case '5':five++;
            break;
            case '6':six++;
            break;
            case '7':seven++;
            break;
            case '8':eight++;
            break;
            case '9':nine++;
            break;
            case '0':zero++;
            break;
            default:printf("Invalid Number\n");
            break;
        }
    }
    printf("Total 0's in given Number : %d\n",zero);
    printf("Total 1's in given Number : %d\n",one);
    printf("Total 2's in given Number : %d\n",two);
    printf("Total 3's in given Number : %d\n",three);
    printf("Total 4's in given Number : %d\n",four);
    printf("Total 5's in given Number : %d\n",five);
    printf("Total 6's in given Number : %d\n",six);
    printf("Total 7's in given Number : %d\n",seven);
    printf("Total 8's in given Number : %d\n",eight);
    printf("Total 9's in given Number : %d\n",nine);
}