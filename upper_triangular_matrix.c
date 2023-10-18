#include<stdio.h>
void main(){
	int r,c,i,j,sum=0;
	
	printf("How many Rows You want to enter? : ");
	scanf("%d",&r);
	printf("How many Columns You want to enter? : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	if(r==c){
		
		for(i=0;i<r;i++){
			for(j=0;j<c;j++){
				if(i>j){
						a[i][j]=0;
				}
				else{
					printf("Enter Value for a[%d][%d] : ",i,j);
					scanf("%d",&a[i][j]);
				}
			}
			
		}
		printf("-------------------------------\n");
		
		for(i=0;i<r;i++){
		 for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	
	}
	
	else{
		printf("-------------------------------\n");
		printf("Not a square matrix");
	}
	
}
