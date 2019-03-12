#include <stdio.h>

int main(void) {
	int n,k,count=1;
	scanf("%d %d",&n,&k);
	int ar[n];
	int i,j;
	for(i=0;i<n;i++)
	{
		scanf("%d",&ar[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(ar[i]==ar[j])
			{
				count=count+1;
				
			}
		}
		if(count==k)
		{
			printf("%d",ar[i]);
			break;
		}
	}
return 0;
}
