#include<stdio.h>
	int main()
	{
	char ar[100];
	int i,count=0,n=0;
	gets(ar);
	for(i=0;ar[i]!='\0';i++)
	{
	if((ar[i]=='.')||(ar[i+1]==' '))
	{
	count++;
	n++;
	}
	}
	if(n==0)
	{count=0;
	    printf("%d",count);
	}
	else
	{
	    printf("%d",count);
	}
	return 0;
	}
