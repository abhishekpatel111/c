#include<stdio.h>
void bubble_sort(int[]);
void main()
{
	int arr[10]={10,9,7,102,23,44,12,78,34,23};
	bubble_sort(arr);
}
void bubble_sort(int a[])
{
	int i,j,temp;
	for(i=0;i<10;j++)
	 { 
	  for(j=i+1;j<10;j++)
	    {
	    	if(a[j]<a[i])
	    	 {
	    	 	temp=a[i];
	    	 	a[i]=a[j];
	    	    a[j]=temp;
			 }
		}
	 }
	 printf("Printing Sorted Element List..\n");
	 for(i=0;i<10;i++)
	   {
	   	printf("%d\n",a[i]);
	   }
}
