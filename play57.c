#include <stdio.h>
#include<string.h>
int main() 
{
	char ar[10];
	char k;
	int n,i,count=0;
	scanf("%s %c",ar,&k);
	n=strlen(ar);
	for(i=0;i<n;i++)
	{
	    if(ar[i]==k)
	    {
	        count++;
	    }
	}
	printf("%d",count);
	return 0;
}
