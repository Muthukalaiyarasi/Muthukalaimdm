#include <stdio.h>

int main(void) {
	int n,m,i,j,k,c=0;
	scanf("%d %d",&n,&m);
	for(i=n;i<=m;i++)
	{
		for(j=1;j<=i;j++)
		{
			k=j*j;
			if(k==i)
			{
				c=c+1;
				break;
			}
		}
	}
	printf("%d",c);
	return 0;
}
