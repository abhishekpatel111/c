#include<stdio.h>
void main()
{
	int i,j,temp;
	int a[10]={21,78,98,90,34,54,42,67,21,87};
	for(i=0;i<10;i++)
	 {
	 	for(j=i+1;j<10;j++)
	 	{
	 		if(a[j]>a[i])
	 		{
	 			temp=a[i];
	 			a[i]=a[j];
	 			a[j]=temp;
			 }
		 }
	 }
	 printf("Printing sorted Element list ..\n");
	 for(i=0;i<10;i++)
	 {
	 	printf("%d\n",a[i]);
	 }
}
