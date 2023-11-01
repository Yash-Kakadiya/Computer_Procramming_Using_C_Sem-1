#include<stdio.h>

void main(){
	int num=get();
	printf("------------------------------\n");
	int factorial=fac(num);
	printf("%d",factorial);
}

int get(int n){
	scanf("%d",&n);
	return n;
}

int fac(int n){
	 if(n==0){
	 	return 1;
	 }
	 else{
	 	return n*fac(n-1);
	 }
}
