#include<stdio.h>
	#include<string.h>
	int main()
	{
	char str[20];
		int n,i,flag;
		printf("enter the string:");
		scanf("%s",str);
		n=strlen(str);
		printf("%d",n);
		for(i=0;i<n;i++)
		{
			if((str[i]>='a'&&str[i]<='z')||(str[i]>='A' && str[i]<='Z')||(str[i]>='0' && str[i]<='9'))
			{
	
				flag=1;
			
			}
			else
			{
				flag=0;
			}
	

		}
		if(flag==1)
		{
			printf("yes");
		}
		else
		{
			printf(" no");
		}
	return 0;
	}

