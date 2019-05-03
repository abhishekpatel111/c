#include<stdio.h>
#include<string.h>
void main()
{
	char s1[20],s2[20];
	printf("ENTER THE 1ST STRING:");
	gets(s1);
	printf("ENTER THE 2nd STRING:");
	gets(s2);
	if(strcmp(s1,s2)==0)
	  printf("STRING ARE EQUAL");
	else
	  printf("STRING ARE NOT EQUAL");
	  return 0;
}
