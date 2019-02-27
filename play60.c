#include <stdio.h>
#include<string.h>
int main() 
{
	char a[10],b[10];
	int n,n1,i,j,c=0;
	scanf("%s %s",a,b);
	n=strlen(a);
	n1=strlen(b);
	for(i=0;i<n;i++)
	{
	    for(j=0;j<n1;j++)
	    {
	    if(a[i]==b[j])
	    {
	        c=1;
	        break;
	    }
	    }
	}
	if(c==1)
	{
	     printf("yes");
	}
	
	else
	{
	    printf("no");
	}
	return 0;
}
