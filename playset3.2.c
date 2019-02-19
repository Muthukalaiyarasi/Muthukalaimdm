#include <stdio.h>
int main()
{
	int n,k,n1,j;
	scanf("%d %d",&n,&k);
	if(n>k)
	{
	    n1=n;
	}
	else
	{
	    n1=k;
	}
    for(j=n1;j>=2;j--)
    {
        if(n%j==0 && k%j==0)
        {
            printf("%d",j);
            break;
        }
    }
	return 0;
}
