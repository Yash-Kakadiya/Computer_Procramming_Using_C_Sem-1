#include<stdio.h>

void main(){
    int i,l=0,user,count=0,n,r;
    
    printf("Enter a Number: ");
    scanf("%d",&n);

	
	printf("Enter a Number for counting frequency : ");
	scanf("%d",&user);
	
    for(i=1;n!=0;i++){
    	r=n%10;
        if(r==user){
        	count++;
		}
		n=n/10;
     }
    
    printf("Frequecy of %d 42is %d\n",user,count);
}
