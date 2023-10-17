#include<stdio.h>
void main(){
	int r,c,i,j;
	
	printf("How many Rows You want to enter? : ");
	scanf("%d",&r);
	printf("How many Columns You want to enter? : ");
	scanf("%d",&c);
	
	int a[r][c],b[r][c],add[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter Value for matrix A a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("-------------------------------\n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter Value for matrix B b[%d][%d] : ",i,j);
			scanf("%d",&b[i][j]);
			add[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("-------------------------------\n");
	printf("Addition of Two Matrices is \n");
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d\t",add[i][j]);
		}
		printf("\n");
	}
}
