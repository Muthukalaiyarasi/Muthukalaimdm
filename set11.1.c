#include <stdio.h>
#include<string.h>
int main()
{ 
    char arr[100];
	int n,l,i,count=0;
	scanf("%s",arr);
	scanf("%d",&l);
	n=strlen(arr);
	for(i=n-1;i>=0;i--)
	{
	    printf("%c",arr[i]);
	    count++;
	    if(l==count)
	    {
	        break;
	    }
	    
	}
	return 0;
}

