#include<stdio.h>
#include<math.h>
void main(){
	int l=0,sum=0,n,r,x;
	
	printf("Enter Decimal Number :");
	scanf("%d",&n);
    x=n;
    while(n!=0){
        n=n/10;
        l++;
    }
    n=x;
    while(n!=0){
        r=n%10;
        sum=sum+pow(r,l); 
        n=n/10;
        }
    n=x;
    if(sum==n){
        printf("Armstrong Number");
    }
    else{
        printf("Not Armstrong Number");
    }
}