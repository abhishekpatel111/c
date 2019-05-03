#include<stdio.h>
#include<string.h>
int main()
{
	char s1[20];
	printf("ENTER THE STRING:");
	gets(s1);//reads string from console
	printf("String is:%s",s1);
	printf("\n REVERSED STRING IS:%s",strlwr(s1));
	return 0;
}
