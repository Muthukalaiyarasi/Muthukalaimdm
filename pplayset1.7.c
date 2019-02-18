#include <stdio.h>

#include<string.h>

int main(void)

{

	char string[10];

	int i,temp,m;

	gets(string);

	m=strlen(string);

	if(m%2==0)

	{

		for(i=0;i<m;i+=2)

		{

			temp=string[i];

			string[i]=string[i+1];

			string[i+1]=temp;

		}

		puts(string);

	}

	else

	{

		for(i=0;i<m-1;i+=2)

		{

			temp=string[i];

			string[i]=string[i+1];

			string[i+1]=temp;

		}

		puts(string);

		

	}





return 0;

}
