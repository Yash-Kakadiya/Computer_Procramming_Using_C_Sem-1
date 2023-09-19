#include<stdio.h>
void main(){
	int ans=0,n,i=1;
	
	printf("Enter Number upto which you want series : 1-2+3-4+. . .n : ");
	scanf("%d",&n);
	
	while(i<=n){
		if(i%2==0){
			ans=ans-i;
		}
		else{
			ans=ans+i;
		}
		i++;
	}
	printf("Sum Of Series : %d",ans);
}
