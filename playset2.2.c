#include <stdio.h>
int main()
{
	int n,ar[10],k,temp=0,i,j;
	scanf("%d %d\n",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&ar[i]);
	}
	for(i=0;i<k;i++)
	{
	    temp=ar[n-1];
	    for(j=n-1;j>=0;j--)
	    {
	       ar[j]=ar[j-1];
	    }
	    ar[0]=temp;
	}
	for(i=0;i<n;i++)
	{
	    printf("%d ",ar[i]);
	}
	
	return 0;
}
