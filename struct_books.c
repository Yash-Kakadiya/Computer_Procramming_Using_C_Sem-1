#include<stdio.h>
#include<string.h>
struct book{
	char title[100],author[100],publication[100];
	float price;
};

void main(){
	struct book b[3];
	int i;
	for(i=0;i<3;i++){
		printf("Enter Title of Book no.%d : ",i+1);
		scanf("%s",b[i].title);
		printf("Enter Author of Book no.%d : ",i+1);
		scanf("%s",b[i].author);
		printf("Enter Publication of Book no.%d : ",i+1);
		scanf("%s",b[i].publication);
		printf("Enter Price of Book no.%d : ",i+1);
		scanf("%f",&b[i].price);
		printf("---------------------------------------\n");
	}
	
	for(i=0;i<3;i++){
		printf("Title of Book no.%d : %s\n",i+1,b[i].title);
		printf("Author of Book no.%d : %s\n",i+1,b[i].author);
		printf("Publication of Book no.%d : %s\n",i+1,b[i].publication);
		printf("Price of Book no.%d : %f\n",i+1,b[i].price);
		printf("---------------------------------------\n");
	}	
}
