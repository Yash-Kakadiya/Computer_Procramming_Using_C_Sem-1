#include<stdio.h>
void main(){

    int r,c,n,a;
    
    printf("Enter Value for n : ");
    scanf("%d",&n);

    for(r=1;r<=n;r++){
		
        for(a=1;a<=n-r;a++){
            printf("   ");
        }
		
        for(c=r;c>=1;c--){
			printf(" %d ",c);
        }
        for(c=2;c<=r;c++){
            printf(" %d  ",c);
        }
         printf("\n");
    }

}