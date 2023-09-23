#include<stdio.h>
void main(){
    int n,i=0,j,ans=1;
    printf("Enter Number Upto Which you Want To print Series : ");
    scanf("%d",&n);

    while(i<=n){
        printf("%d,",ans);
        j=ans;
        ans=i+ans;
        i=j;
    }
    printf(" and so on");
}