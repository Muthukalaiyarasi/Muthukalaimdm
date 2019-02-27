#include <stdio.h>
#include<string.h>
int main() 
{
	char ar[10];
	char k;
	int n,i;
	scanf("%s %c",ar,&k);
	n=strlen(ar);
	for(i=0;i<n;i++)
	{
	    if(ar[i]==k)
	    {
	        printf("%d",i+1);
	        break;
	    }
	}
	return 0;
}
