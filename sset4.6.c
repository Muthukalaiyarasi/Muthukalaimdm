#include <stdio.h>
	
	int main() 
	{
		char str[50];
		int i,count=0;
	
		scanf("%[^\n]s",str);
		for(i=0;str[i]!='\0';i++)
		{
			if(!((str[i]>='0' && str[i]<='9')||(str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')))
			{
				count=count+1;
			}
		}
		printf("\n%d",count);
		return 0;
	}



