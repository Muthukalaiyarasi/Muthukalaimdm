#include <stdio.h>

int main(void) {
	int l,r,i,s=0;
	scanf("%d %d",&l,&r);
	for(i=l;i<=r;i++)
	{
		if(i%2!=0)
		{
			s=s+i;
		}
	}
	printf("%d",s);
	return 0;
}
