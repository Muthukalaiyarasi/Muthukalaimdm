#include <stdio.h>
#include<string.h>
int main()
{
	char a[10],b[10];
	int k,i,c1=0,c2=0;
	scanf("%s %s",a,b);
	scanf("%d",&k);
	int n1=strlen(a);
	int n2=strlen(b);
	if(n1==n2)
	{
	    for(i=0;i<n1;i++)
	    {
	        if(a[i]==b[i])
	        {
	            c1++;
	        }
	        else
	        {
	            c2++;
	        }
	    }
	    if(c2==k)
	    {
	        printf("yes");
	    }
	    else
	    {
	        printf("no");
	    }
	}
	else
	{
	    printf("no");
	}
	return 0;
}
