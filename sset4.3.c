#include<stdio.h>
	int main()
	{
	char ar[100];
	int i,count=0;
	gets(ar);
	for(i=0;ar[i]!='\0';i++)
	{
	if(ar[i]==' ')
	{
	count++;
	}
	}
	printf("%d",count);
	return 0;
	}
