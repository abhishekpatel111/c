#include<stdio.h>
 main()
{
	FILE*fp;
	char ch;
	fp=fopen("file.txt","w");
	fprintf(fp,"MY NAME IS ABHISHEK PATEL\n");
	fclose(fp);
}
