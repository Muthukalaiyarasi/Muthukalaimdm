#include<stdio.h>
#include<string.h>
int main() 
{
    char ar[10];
    int i,j,n;
	scanf("%s",ar);
	n=strlen(ar);
	for(i=0;i<n;i++)
	{
	    for(j=i+1;j<n;j++)
	    {
	    if(ar[i]==ar[j])
	    {
	        printf("yes");
	        break;	   
	    }
	    }
	    break;
	}
	return 0;
}
