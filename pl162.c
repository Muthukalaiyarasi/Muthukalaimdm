#include <stdio.h>
int main() 
{

char s[100];
	int n,k,i,j,f=0,m=0;
	scanf("%d %d",&n,&k);
	for(i=0;i<n;i++)
       gets(s);

	for(i=0;i<n;i++)
	{f=0;
		for(j=0;s[j]!='\0';j++)
		{
			if(s[j]=='a'||s[j]=='e'||s[j]=='i'||s[j]=='o'||s[j]=='u'||s[j]=='A'||s[j]=='E'||s[j]=='I'||s[j]=='O'||s[j]=='U')
			{
				f++;
				
			}
		}
		if(f==0)
		break;
		if(f>=1)
		m++;
	
	}
	
	
	     
	if(m>=k)
		printf("es");

	else
		printf("No");

}
