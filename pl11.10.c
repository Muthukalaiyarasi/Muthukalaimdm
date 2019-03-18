#include <stdio.h>

int main(void) {
	int n,s;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		int s1=0,sum2=0;
		for(int j=i;j<n;j++)
		{
			s1=s1+a[j];	
		}
		for(int j=0;j<i+1;j++)
		{
			sum2=sum2+a[j];	
		}
		s=sum1+sum2;
		printf("%d ",s);
	}
	return 0;
}
