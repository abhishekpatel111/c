#include<stdio.h>
void main()
{
	FILE *fptr;
	int id;
	char name[30];
	float salary;
	fptr=fopen("emp.txt","w");
	if(fptr=NULL)
	{
		printf("File does not exists\n");
		return;
	}
	printf("ENTER THE ID\n");
	scanf("%d",&id);
	printf("ENTER THE NAME\n");
	scanf("%s",&name);
	printf("ENTER THE SALARY\n");
	scanf("%f",&salary);
	fprintf(fptr,"SALARY=%.2f\n",salary);
	fclose(fptr);
}
