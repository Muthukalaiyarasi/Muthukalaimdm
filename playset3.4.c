#include <stdio.h>

int main(void) {
	char ar[10];
	scanf("%s",ar);
	int i,flag=0;
	for(i=0;ar[i]!='\0';i++)
	{
		if(ar[i]>='0' && ar[i]<='9')
		{
			flag=1;
		}
		else
		{
			flag=0;
			break;
		}
	}
	if(flag==1)
	{
		printf("yes");
	}
	else
	printf("no");
	return 0;
}
