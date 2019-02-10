#include<stdio.h>
	int main()
	{
	  char s[10];
	  int k,i;
	printf("enter the string and nth value");
	scanf("%s",s);
	scanf("%d",&k);
	for(i=0;i<k;i++)
	{
	printf("%c",s[i]);
	}
	return 0;
	}
