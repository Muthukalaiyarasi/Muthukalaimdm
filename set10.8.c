#include<stdio.h>
	
	int main()
	{
	    int ar[10],i,n,j=1;
	    scanf("%d",&n);
	    for(i=0;i<n;i++)
	    {
	    scanf("%d",&ar[i]);
	    }
	    for(i=0;i<n;i++)
	    {
	        if(j!=ar[i])
	        {
	            printf("%d",i);
	            break;
	        }
	        j++;
	    }
	    return 0;
	}
	
