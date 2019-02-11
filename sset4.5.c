#include<stdio.h>
	int main()
	{
	int i,j=0,b,k=0;
	char ar[0];
	scanf("%s",ar);
	for(i=0;ar[i]!='\0';i++)
	b=i;
	for(i=0;i<=b;i++)
	{
	if((ar[i]>=48)&&(ar[i]<=57))
	{
	j++;
	}
	else
	{
	k++;
	}
	}
	printf("%d",j);
	
	//printf("%d",k);
	
	return 0;
	}



