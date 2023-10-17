#include<stdio.h>
void main(){
	int r,c,i,j,pos=0,neg=0,zero=0;
	
	printf("How many Rows You want to enter? : ");
	scanf("%d",&r);
	printf("How many Columns You want to enter? : ");
	scanf("%d",&c);
	
	int a[r][c];
	
	for(i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("Enter Value for a[%d][%d] : ",i,j);
			scanf("%d",&a[i][j]);
			if(a[i][j]>0){
				pos++;
			}
			else if(a[i][j]<0){
				neg++;
			}
			else{
				zero++;
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
	printf("-------------------------------\n");
	printf("Total Positive Numbers : %d\n",pos);
	printf("Total Negative Numbers : %d\n",neg);
	printf("Total Zeroes : %d\n",zero);
}
