#include<stdio.h>
#include<string.h>
int main() 
{
    char ar[10],b[5];
    int i,n,j;
	scanf("%s %s",ar,b);
	n=strlen(ar);
    for(i=0;i<n;i++)
    {
        
    }
    for(j=0;ar[j]!='\0';j++)
    {
        ar[i]=b[j];
        i++;
    }
    ar[i]='\0';
    printf("%s",ar);
	return 0;
}
