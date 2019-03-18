#include <stdio.h>

int main(void) {
	int n;
	scanf("%d",&n);
	int ar[n];
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				ar[j]=0;
			}
		}
	}
	for(i=0;i<n;i++)
	{
		if(ar[i]!=0)
		printf("%d ",ar[i]);
	}
	return 0;
}
	
