#include <stdio.h>

int main(void) {
	int n,sum=0;
	scanf("%d",&n);
	int a[n],b[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		b[i]=a[i];
	}
	
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			int temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}
	
	}
	for(i=0;i<n;i++)
	{
		for(int j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				printf("%d",j+1);
			}
		}
	}
	
	return 0;
}
