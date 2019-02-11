#include <stdio.h>
	
	int main()
	{
	    int n,m,count=0,a[50],i;
	    scanf("%d%d",&n,&m);
	    for(i=0;i<n;i++)
	    {
	        scanf("%d",&a[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(a[i]==m)
	        {
	            count++;
	        }
	    }
	    printf("%d",count);
	    return 0;
	}
