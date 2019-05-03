#include<stdio.h>
#include<string.h>
void main()
{
	char s[8]="ABHISHEK";
	int i=0;
	int count;
	while(i<11)
    	{
		 if(s[i]=='a'||s[i]=='e'||s[i]=='o'||s[i]=='i'||s[i]=='u')
		    {
		    	count++;
			}
			i++;
	     }
	     printf("The number of vowels %d",count);
}
	     
