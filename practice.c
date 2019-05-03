#include<stdio.h>
int main()
{
	int i=10;
	int j=20;
      switch(i)
      {
       case 10:
	  printf("the value of i evaluted in outer switch:%d\n",i);
	  case 20:
	  switch(j)
	  {
	  	case 20:
       printf("the value of j evaluated in nested switch:%d\n",j);
	}
	}
	printf("exact value of i is:%d\n",i);
	printf("exact value of j is:%d\n",j);
	return 0;
}

