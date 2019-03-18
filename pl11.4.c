#include <stdio.h>

int main(void) {
	int n,sum=0;
	scanf("%d",&n);
	int a[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	for(i=0;i<n-1;i++)
	{
		sum=sum+(a[i]+a[i+1]);
	}
	printf("%d",sum);
	return 0;
}
