#include<stdio.h>

void main(){
    int r,c,k,x,y,s;
    printf("Enter Width of Tree : ");
    scanf("%d",&r);
    printf("Enter Height of Tree : ");
    scanf("%d",&s);
    x=s;
    y=r;
    for(s=1;s<=x;s++){
        if(s==1){
            for(r=1;r<=y;r++){
                for(k=y-1;k>=r;k--){
                    printf(" ");
                    }
                for(c=1;c<=r;c++){
                    printf(" *");
                }
                printf("\n");
            }
        }
        else{
            for(r=y-x;r<=y;r++){
                for(k=y-1;k>=r;k--){
                    printf(" ");
                    }
                for(c=1;c<=r;c++){
                    printf(" *");
                }
                printf("\n");
            }
        }
    }
    for(r=1;r<=x;r++){
        for(k=x;k>=1;k--){
            printf(" ");
        }
        for(c=1;c<=y-x;c++){
            printf(" *");
        }
        printf("\n");
    }
}