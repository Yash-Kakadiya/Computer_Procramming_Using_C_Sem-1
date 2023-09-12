#include<stdio.h>

void main(){
	int a,b,c,ans;
	char largeof2;
	printf("Enter Value of a : ");
	scanf("%d",&a);
	printf("Enter Value of b : ");
	scanf("%d",&b);
	printf("Enter Value of c : ");
	scanf("%d",&c);
	
	largeof2=((a>b)?'a':'b'); 
	
	switch(largeof2){
		case 'a': 
		ans=a*c;
		printf("large of first two multiplied by third : %d",ans);
		break;
		case 'b': 
		ans=b*c;
		printf("large of first two multiplied by third : %d",ans);
		break;
	}
	 
	 
	

}
