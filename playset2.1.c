#include <stdio.h>
 
int main(void) 
{
	char strr[50];
	scanf("%s",strr);
	if(strr[0]=='S' || strr[0]=='s')
	{
		printf("\nyes");
	}
	else
	{
		printf("\nno");
	}
	return 0;
}
