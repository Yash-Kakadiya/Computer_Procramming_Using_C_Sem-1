#include<stdio.h>
void main(){

    int r,c,n,a;
    
    printf("Enter Value for n : ");
    scanf("%d",&n);

    for(r=n;r>=1;r--){
		
        for(a=n;a>=r;a--){
            printf(" ");
        }
		
        for(c=1;c<=r;c++){
        	if(c!=1){
        		printf(" ");
			}
			printf("*");
        }
         printf("\n");
    }

}
