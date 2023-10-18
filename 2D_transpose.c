#include<stdio.h>
void main(){
	int r,c,i,j;
	
	printf("How many Rows You want to enter? : ");
	scanf("%d",&r);
	printf("How many Columns You want to enter? : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter Value for a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("-------------------------------\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[i][j]);
		}
		printf("\n");
	}
	printf("-------------------------------\n");
	printf("Transpose :\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",a[j][i]);
		}
		printf("\n");
	}
}
