#include <stdio.h>
	
	int main()
	{
	   char ar[100],i,j,n;
	   scanf("%s",ar);
	   for(i=0;ar[i]!='\0';i++);
	   j=i/2;
	   ar[j]='*';
	   printf("%s",ar);
	    return 0;
	}
