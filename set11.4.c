#include <stdio.h>

int main(void) 
{
	int n,k,i,r=1;
	scanf("%d %d",&n,&k);
	for(i=1;i<=k;i++)
	{
		r=r*n;	
	}
	printf("%d",r);
	return 0;
}
