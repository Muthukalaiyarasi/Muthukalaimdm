#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int s=0;
		for(int j=0;j<i+1;j++)
		{
			s=s+a[j];	
		}
		printf("%d ",s);
	}
	return 0;
}
	
