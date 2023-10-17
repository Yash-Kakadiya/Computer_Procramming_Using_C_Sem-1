#include<stdio.h>
void main(){
	int r,c,i,j;
	
	int a[20][2];
	
	for(i=0;i<20;i++){
		for(j=0;j<2-1;j++){
			printf("Enter Roll No. and Marks for student %d : ",i+j+1);
			scanf("%d %d",&a[i][j],&a[i][j+1]);
			
		}
	}
	printf("-------------------------------\n");
	for(i=0;i<20;i++){
		for(j=0;j<2-1;j++){
			printf ("%d\t%d",a[i][j],a[i][j+1]);
		}
		printf("\n");
	}
}
