#include<stdio.h>
#include<math.h>
void main(){
	int i,l=0,sum=0,n,r,x,y;
	
	printf("Enter Decimal Number :");
	scanf("%d",&n);
    x=n;
    while(n!=0){
        n/=10;
        l++;
    }
    n=x;
    for(i=1;i<=l;i++){
        while(n!=0){
        r=n%10;
        sum+=pow(r,l); 
        n/=10;
        }
    }
    n=x;
    if(sum==n){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
}