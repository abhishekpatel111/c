#include<stdio.h>
sum(int,int);
void main()
     {
	int a,b,result;
	printf("\n WE ARE GOING TO CALCULATE THE SUM:");
	printf("\n ENTER TWO NUMBER:");
	scanf("%d %d",&a,&b);
	 result=sum(a,b);
	}
	  void sum(int a,int b)
	{
		printf("\n The sum is %d",a+b);
	}
