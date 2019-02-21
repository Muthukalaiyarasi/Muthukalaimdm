#include <stdio.h>
int main() 
{
	int n,k,i,result=1;
	scanf("%d %d",&n,&k);
	for(i=1;i<=n;i++)
	{
	    result=result*k;
	    if(result==n)
	    {
	        printf("yes");
	        break;
	    }
	}
	if(result>n)
	{
	    printf("no");
	}
	return 0;
}
