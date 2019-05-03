#include<stdio.h>
#include<string.h>
int main()
{
	char ch[10]={'j','v','t','\0'};
	char ch2[10];
	strcpy(ch2,ch);
	printf("value  OF STRING IS %s :",ch2);
	return 0;
}
