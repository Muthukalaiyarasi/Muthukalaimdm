#include <stdio.h>
int main()
{
    int n,a[10],i,j,count,m=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a[i]);
	}
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                count++;
            }
        }
        if(count>=m)
        {
            m=count;
        }
    }
    printf("%d",m);
    return 0;
}
