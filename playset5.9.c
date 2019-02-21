#include <stdio.h>
int main()
{
	signed int number;
	scanf("%d",&number);
	if(number>=-32768 && number<=32767)
	{
	    printf("INT");
	}
	else
	{
	    printf("LONG");
	}
	return 0;
}
