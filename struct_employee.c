#include<stdio.h>
#include<string.h>
struct emp{
	char name[100];
	int age,salary;
};
void main(){
	struct emp e1;
	printf("Enter name of Employee : ");
	gets(e1.name);
	printf("Enter Age of Employee : ");
	scanf("%d",&e1.age);
	printf("Enter Salary of Employee : ");
	scanf("%d",&e1.salary);
	
	printf("---------------------------------------\n");
	printf("Employee's Name : %s\n",e1.name);
	printf("Employee's Age : %d\n",e1.age);
	printf("Employee's Salary : Rs.%d",e1.salary);
	
}
