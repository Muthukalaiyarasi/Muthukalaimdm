#include <stdio.h>
#include<string.h>
void main() 
{
	char s[100],a[100];
	scanf("%s %s",s,a);
	if(strlen(s)==strlen(a+1))
	{
	printf("yes");
	}
	else
		printf("no");
	
}
