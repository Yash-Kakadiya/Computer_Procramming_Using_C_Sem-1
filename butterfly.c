#include<stdio.h>
void main(){

    int r,c,n,k,l;
    
    printf("Enter length of butterfly : ");
    scanf("%d",&l);
    n=l/2;
    for(r=1;r<=n;r++){
        for(c=1;c<=r;c++){
            printf("* ");
        }
        for(k=1;k<=(n-r)*2;k++){
            printf("  ");
        }
        for(c=1;c<=r;c++){
            printf(" *");
        }
        printf("\n");
    }
     for(r=n;r>=1;r--){
        for(c=1;c<=r;c++){
            printf("* ");
        }
        for(k=1;k<=(n-r)*2;k++){
            printf("  ");
        }
        for(c=1;c<=r;c++){
            printf(" *");
        }
        printf("\n");
    }
}