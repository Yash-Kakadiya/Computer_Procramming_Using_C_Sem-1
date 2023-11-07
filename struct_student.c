#include<stdio.h>
#include<string.h>
struct stu{
	char name[100];
	float per;
	int age;
};

void main(){
	struct stu s[5];
	int i;
	for(i=0;i<5;i++){
		printf("Enter Name of Student no.%d : ",i+1);
		scanf("%s",s[i].name);
		printf("Enter Age of Student no.%d : ",i+1);
		scanf("%d",&s[i].age);
		printf("Enter Percentage of Student no.%d : ",i+1);
		scanf("%d",&s[i].per);
		printf("---------------------------------------\n");
	}
	
	for(i=0;i<5;i++){
		printf("Name of Student no.%d : %s",i+1,s[i].name);
		printf("Age of Student no.%d : %d",i+1,s[i].age);
		printf("Percentage of Student no.%d : %f",i+1,s[i].per);
		printf("---------------------------------------\n");
	}	
}
