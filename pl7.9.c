#include <stdio.h>
int main()
{
    int n,ar[10],i,k;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&ar[i]);
	}
    for(i=0;i<n-k;i++)
    {
        printf("%d ",ar[i]);
    }
    return 0;
}
