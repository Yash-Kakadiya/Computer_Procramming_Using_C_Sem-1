#include<stdio.h>
void main(){
    int n,i=0,j,ans=1;
    printf("Enter Number Upto Which you Want To print Series : ");
    scanf("%d",&n);

    for(i=0;i<=n;i=j){
        printf("%d,",ans);
        j=ans;
        ans=i+ans;
    }
    printf(" and so on");
}
