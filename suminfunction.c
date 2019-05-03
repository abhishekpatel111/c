#include<stdio.h>
int sum();

void main()
{ 
    int result;
	printf("\n WE ARE GOING TO CALCULATE THE SUM OF TWO NO.");
	result=sum();
	printf("%d",result);
}

 int sum()
 {
 	int a,b;
 	printf("\n Enter two number");
 	scanf("%d %d",&a,&b);
 	return a+b;
 	
 }
