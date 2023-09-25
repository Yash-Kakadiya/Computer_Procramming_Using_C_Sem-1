#include<stdio.h>
void main(){

    int r,c,n;
    
    printf("Enter Value for n : ");
    scanf("%d",&n);

    for(r=1;r<=n;r++){

        for(c=1;c<=r;c++){
            printf("%d",r);
        }
         printf("\n");
    }

}