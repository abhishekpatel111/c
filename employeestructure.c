#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[20];
	float salary;
} e1,e2;
int main()
 {
 	e1.id=101;
 	strcpy(e1.name,"ABHISHEK PATEL");
 	e1.salary=150000;
 	e2.id=103;
 	strcpy(e2.name,"AVINASH  PATEL");
 	e2.salary=140000;
 	printf("EMPLOYEE 1 ID:%d\n",e1.id);
 	printf("EMPLOYEE 1 NAME:%s\n",e1.name);
 	printf("EMPLOYEE 1 SALARY:%f\n",e1.salary);
 	printf("EMPLOYEE 2 ID:%d\n",e2.id);
 	printf("EMPLOYEE 2 NAME:%s\n",e2.name);
 	printf("EMPLOYEE 2 SALARY:%f\n",e2.salary);
 	return 0;
 }
