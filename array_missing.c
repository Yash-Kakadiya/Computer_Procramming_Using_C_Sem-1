#include<stdio.h>

void main(){
	int i,j,n,count=0,k,x,y=0;
	
	printf("How many upto Numbers You want to find missing numbers : ");
	scanf("%d",&n);
	
	int arr[n];
	
	for(i=0;i<n;i++){
	printf("Enter Number : ");
	scanf("%d",&arr[i]);
	}
	
	printf("Missing numbers:\n");
    
    for (i=0;i<n;i++)
    {
        for(j=i+1;j<n-1;j++)
        {
            if(arr[j]-arr[i]==1);
            else{
            	for(k=1;k<arr[j]-arr[i];k++){
            		x=arr[j]-arr[i]-y;
            		//printf("else runs \n");
            		printf("%d \n",x);
            		y++;
            	   
				}
            	
			}
            break;
            
        }
    }
}
