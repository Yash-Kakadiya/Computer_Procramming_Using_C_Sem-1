#include<stdio.h>
void main(){
	int r,c,n,num=1,a;
	char ch='A';
	printf("Enter Ending value for row : ");
	scanf("%d",&n);

    for(r=1;r<=n;r++){
		
        for(a=n;a>=r;a--){
            printf(" ");
        }
		
        for(c=1;c<=r;c++){
        	if(c!=1){
        		printf(" ");
			}
			if(r%2!=0){
				printf("%d",num++);
			}
			else{
				printf("%c",ch++);
			}
        }
         printf("\n");
    }

}
