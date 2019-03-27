#include <stdio.h>

int main() 
{
	int n,k,arr[1000],i,t,j;
  scanf("%d%d",&n,&k);
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	for(i=0;i<k;i++)
	{
		for(j=i+1;j<k;j++)
		{
		if(arr[i]>arr[j])
		{
			t=arr[i];
			arr[i]=arr[j];
			arr[j]=t;
		}
		}
	}
	for(i=0;i<k;i++)
	printf("%d ",arr[i]);

	for(i=k;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
		if(arr[i]<arr[j])
		{
			t=arr[i];
			ar[i]=arr[j];
			arr[j]=t;
		}
		}
	}
	for(i=k;i<n;i++)
	printf("%d ",arr[i]);
 
	
}
