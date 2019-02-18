#include <stdio.h>

int main(void) {
	char ar[100];
	int u,v,i;
	scanf("%s",ar);
	for(i=0;ar[i]!='\0';i++)
	{
		if(ar[i]=='x' && ar[i]=='y' && ar[i]=='z')
		{
			u=ar[i];
			v=u-23;
			ar[i]=v;
		}
		else
		{
		u=ar[i];
		v=u+3;
		ar[i]=v;
		}
	}
	printf("%s",ar);
	return 0;
}
